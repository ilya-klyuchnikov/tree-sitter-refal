module.exports = grammar({
    name: 'refal',

    extras: $ => [
        $.comment,
        /\s/
    ],

    rules: {
        source_file: $ => seq(
            field('module', $.module),
            field('function', repeat($.function)),
        ),

        module: $ => seq(
            '$MODULE',
            field('name', $.id),
            ';',
        ),

        function: $ => seq(
            field('name', $.id),
            '{',
            field('sentence', repeat1($.sentence)),
            '}',
        ),

        sentence: $ => seq(
            field('pattern', repeat($._pattern_obj)),
            '=',
            field('rewrite', repeat($._rewrite_obj)),
            ';',
        ),

        _pattern_obj: $ => choice(
            $.e_var,
            $.s_var,
            $.t_var,
            $._symbol,
            $._pattern_obj_br,
        ),

        _pattern_obj_br: $ => seq(
            $.str_br_l,
            repeat($._pattern_obj),
            $.str_br_r,
        ),

        _rewrite_obj: $ => choice(
            $.e_var,
            $.s_var,
            $.t_var,
            $._symbol,
            $._rewrite_obj_br,
            $._rewrite_obj_fn,
        ),
        _rewrite_obj_br: $ => seq(
            $.str_br_l,
            repeat($._rewrite_obj),
            $.str_br_r,
        ),
        _rewrite_obj_fn: $ => seq(
            $.fun_br_l,
            $._symbol,
            repeat($._rewrite_obj),
            $.fun_br_r,
        ),

        _symbol: $ => choice($.q_symbol, $.id),
        str_br_l: $ => '(',
        str_br_r: $ => ')',
        fun_br_l: $ => '<',
        fun_br_r: $ => '>',
        q_symbol: $ => /'([^'\t\n\f])*'/,
        e_var: $ => /\$e\.([a-zA-Z][-_a-zA-Z0-9]*|[0-9]+)/,
        s_var: $ => /\$s\.([a-zA-Z][-_a-zA-Z0-9]*|[0-9]+)/,
        t_var: $ => /\$t\.([a-zA-Z][-_a-zA-Z0-9]*|[0-9]+)/,
        id: $ => /[a-zA-Z][-_a-zA-Z0-9]*/,
        comment: $ => token(choice(
            seq('//', /.*/),
            seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
        )),
    }
});

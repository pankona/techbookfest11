= EM の仕事ってなんなのか

EM の仕事とひとくちに言っても、所属する組織やチームによってその実態はさまざまであると思います。
本章では、業務において普段私がどのように過ごしているかを紹介します。

== 私の一週間の過ごし方

EM はミーティングが多い役割であるというイメージをお持ちの方もいるかもしれません。
以下のグラフは、2021 年 6 月のとある週について、どれくらいの時間ミーティングに費やしているかを表したものです。
(一週間を 40 時間としています。また、これはとある週を抜き出したものであり、時期や周辺の状況によって多少変動します)

//image[weekly_schedule][一週間 (40時間) に占めるミーティングの割合 (単位は時間)]{
//}

@<img>{weekly_schedule} を見ると、66％くらいはミーティングに時間を費やしていることが分かります。見る人によってはなかなか多いと思うかもしれないですね。
各項目の内訳は以下のようなものです。

 * 社内勉強会 ... 輪読会や、トレンドな技術に関する討論
 * 採用活動 ... 採用候補者の書類選考や面接
 * チーム外の案件 ... 組織横断的な施策に関する情報共有
 * 組織運営 ... マネージャーが集うミーティングや、組織課題に対する相談
 * チーム運営 ... 自チームの運営 (スクラムセレモニーや 1on1 を含む)

"ミーティングでない" に分類している 34％で、ミーティングで発生した宿題の消化や、チームメンバーから提出されたプルリクエストのレビューをこなします。さらに時間があまれば自身でコードを書きます。

== EM として行う仕事の内容

@<img>{weekly_schedule} に載せた項目は、私が行っている業務のすべて (EM としての仕事かそうでないかに関わらず) を含んでいます。
このうち、EM として行っている部分についてもう少し詳しく記載します。

=== メンバーの勤怠チェック、休暇の承認

弊社がコアタイムなしのフレックスタイム制であることもあり、それほど熱心に遅刻早退を管理するような作業は必要ありませんが、たとえばとあるメンバーの深夜残業が多かったり、あるいは逆に勤務時間が異様に短い日々が続くようなことがあれば、何かのっぴきならない事情があることを心配して確認するようなことはあります。
また、休暇の申請があれば、承認ボタンを押す仕事が発生します。

=== 採用活動

弊社の EM は全員が採用活動に関わっています。
活動の内訳は、書類選考、面接、オファー額の決定、採用活動の改善、などです。

==== 書類選考

自分に関係する応募 (ウェブサービス開発者として応募があったもの) について、書類に目を通し、合否判定をします。
担当者は日によってランダムに決定されるため、必ずしも巡ってくるものではありません。平均して週に 1~2 件の書類選考を行っています。

==== 面談・面接

カジュアル面談、一次面接、二次面接、最終面接に応対します。
担当者はラウンドロビン式に決定され、平均しておよそ 2 週間に 1 回程度のペースで何らかの面接あるいは面談にアサインされます。
面談・面接そのもののに要する時間は 1 時間ですが、面接前に準備を、面接後に合否の相談を行う関係上、一度のアサインで費やされる時間はおよそ 2 時間ほどです。

==== 採用活動の改善

採用にまつわる活動について、月に 2 回ほど振り返りや改善案に関する相談を行っています。相談の結果を受けて、各種求人媒体に出しているジョブデスクリプションの更新や、面接マニュアルの更新、採用チャンネル (どのサービスを使って採用活動をするか) の更新作業を行います。

=== メンバーの評価

@<img>{weekly_schedule} にはメンバーの評価に関する活動が含まれていませんが、およそ半期に一度、メンバーの評価を行う作業が発生します。
評価に関する活動は、ミッションの策定とその達成具合を評価することに分かれます。

==== ミッションの策定

短期、あるいは中長期をターゲットにしたチームの目標を策定し、各メンバーのミッションとして落とし込みます。サービスの安定運用が基本的なミッションとして存在し、何か大きなロードマップが予定されている場合はロードマップの達成がミッションとして追加される場合もあります。 メンバーによって得意なことややりたいことが異なるため、できる限り意見を汲んで各メンバーにミッションを作っていきます。

==== 評価

設定したミッションに対する各メンバーの達成度に鑑み、評価をします。
評価結果は本人にフィードバックすると共に、次期の評定や役割を決めるための情報として用います。

=== ピープルマネジメント

メンバーが抱える生産性を阻害する要因を取り除くべく、色々な手を打ちます。主にメンバーとの 1on1 を通して、現状のプロセスのやりにくい点、設計や実装への不満、人間関係の不満などをヒアリングし、できる限り解決するように図らいます。

=== その他

==== 他のチームから持ち込まれる案件への対処

チーム外で組織横断的な協力が不可欠な案件が発生する場合があります。
以下のような判断をするために、チーム外で発生した案件に対する一次請けとして振る舞います。

 * 自チームからリソースを提供する必要があるかどうか
 * リソースを提供する必要があるとしたら、どのメンバーにアサインするか

現在自チームで進行中の案件に影響が出てしまう場合は、関係各位とのスケジュール調整を行います。

//embed[latex]{
\clearpage
//}

普段の業務についてざっくり記載しましたが、私がどのように日常を送っているかイメージいただけたでしょうか。案外、自チームのマネジメント以外の作業が多いということに気づきます。
次章から、EM になる前後で感じたことや実践したこと、失敗したこと等について触れていきます。

= EM になる前後の心境

EM になる前後は EM という役割に期待される仕事内容がよく分かっておらず、色々想像を膨らませては不安に思ったり、「EM とは」のようなワードで Google 検索をしたりしていました。
本章では私が EM 就任前後にどのようなことを考えていて、どのように不安を払拭していったかについて記載します。EM にこれからなる、あるいはなったばかりの方は、私と同じようなプレッシャーを感じている方もいるかもしれないと思っています。ここに記載する内容が、そういった方々の参考になれば幸いです。

== 就任前の想像

私が就任前に持っていた EM のイメージは、開発業務におけるあらゆる困り事を解決する人、という感じでした。

 * フロントエンド、バックエンド、バッチ処理に至るまでのあらゆる部分に詳しく、何か問題が発生すればトラブルシューティングを行い、たちどころに解決することができる
 * チームビルディングに詳しく、さまざまなチームビルディング手法を用いてチームを立ち上げることができる
 * 開発プロセスに難があれば、やはりそれも解決する
 * チームメンバーをモチベートすることができる。チームメンバーのやる気がなかったら EM に責任がある

今思うに、要するに私は "スーパーマン" のようなものを思い描いていました。この想像は就任前の私にはそれなりにプレッシャーになっていたことを覚えています。

== 就任後の心境

実際に EM としての業務を始めていくと、当然ではありますが思い描いていたような動きはできない日々が続きました。
理想の姿と自分の能力のギャップが大きく、それを少しでも埋めようと毎日業務を終えてから 1on1 のやり方やチームビルディング手法などに関する書籍を読みふけったりしていました。

ただ、1ヶ月ほど経過する頃には少し心境も変わり、そこまで全能である必要はないし、そもそもイメージしていたような全能にはなれないと考えるようになりました。

=== 冷静に考えてスーパーマンはないでしょ

実際に私がイメージしていたような能力を備えた人物は、そういった人もたまにはいるかもしませんが、概ねの人はそうではないのが現実であろうと思います。
事実、EM になるからといって急にスーパーマンになることもできないわけで、結局のところ、現在の自分が持てる力をできるだけ発揮して仕事にあたる以上のことはできません、という至極当然な考えに落ち着きました。もちろんより良い EM になるために学習は続けるべきでしょうが、この考えを得ることで日々感じていたストレスともいえるプレッシャーはほとんどなくなりました。

==== スーパーマンというより女子高生

"もし高校野球の女子マネージャーがドラッカーの『マネジメント』を読んだら" という著書が一時期話題になりました。
この本はタイトルが示すように女子高生が高校野球チームのマネジメントをするお話なのですが、主人公たる女子高生は当然プレイヤーではなく、負けているときに代わりに打席に立つようなことはありませんし、抑えのピッチャーとして登板することもありません。ひたすら裏方に徹して、チームがうまく機能することを阻害する要因を取り除くことに尽力しています。

人によってさまざまな EM のスタイルがあるかと思いますが、個人的にはこの「もしドラ」スタイルが自分にはあっていそうと感じ、それからは以下のように振る舞うようにしました。

===== チームの主体はメンバー

自分でコードを書いて案件を進めたくなる気持ちをちょっと横に置き、困りごとが起きても必ずしも自分が手ずから解決する必要はない (そもそも解決できるとも限らない) と考えるようにしています。
私は、ややもすればあらゆる困りごとは EM が解決をするべき (することができるような能力を備えているべき) と考えそうになってしまうことがありましたが、メンバーの成長やよりサステナブルなチーム運用を考えると出しゃばらずにそのままメンバー自身に頑張ってもらうことや、あるいは別チームにアドバイスを受けるためにコミュニケーションのハブになるようにしています。

===== 自分よりうまくやれるひとがチームにいるならばやってもらったほうが確からしい結果になる

幸いなことに、業務における概ねの事柄は私よりもチームメンバーのほうが詳しいという状況があります。
そういった点からも私は EM ではあるもののメンバーの上位互換ではないので、問題解決のために "誰が何が得意か"、"この問題は誰向きか"、を考え、自分を含めて "誰がこなすのが一番確からしい結果が得られそうか" という観点で作業を散らしていくようにしています。

====[column] EM になる前にした準備

私の場合、EM を打診されてから実際にその役割に就くまで 3 ヶ月ほどの期間がありました。その間、準備らしい準備は特にせずにただ時がくるのを待っていた感じではありましたが、"EM の仕事とは何か" というのを考え始めて社内文書にあたったり、Google 検索して出てくるマネージャー向けオススメ書籍を 2、3 冊読む程度のことはしていました。

ただ、EM になって一年ほどたった今、結果として思うことは、実際に EM をやってみないと的を射た準備をするのは難しいだろうということです。チームが抱える課題は千差万別であり、EM に必要なことはつまり "問題が何かを見極めて適宜手を打っていくこと" でしかなく、あらゆる場面で応用の効く準備をちょこっとした時間で習得するのは難しいだろうと感じています。

====[/column]

= EM ってどうよ

== 楽しいこと

 * 1on1 によって得られる知見
 * メンバーの好き嫌いと向き合う
 ** そして絶望する

== つらいこと

 * Quick Win が得にくいこと
 * コンテキストスイッチが激しい
 ** チームの課題に向き合う
 ** プレイヤーとしての仕事
 ** 評価に関する作業
 ** 組織運営の文脈で現れる作業
 ** 採用活動

= 一年 EM やった振り返り

== 失敗したことの例

 * 自分がプレイヤーだった頃との差分についての期待値調整
 ** あきらかに下がるベロシティ
 ** しかしプレイヤーとしての活躍を期待するメンバー
 ** 自分もそうありたいと思う気持ち

== いまだに難しいこと

 * 作業をメンバーに移譲すること
 ** 地味な作業を自分でやってしまうこと
 * ネガティブなフィードバック

== これからやっていきたいこと

 * 定量的な分析に基づくチームビルディング
 * 技術力を失わないために
 ** コードレビュー
 ** 実際に手を動かすこと
 ** 技術的な発信も

= まとめ

== 結局 EM の仕事とは

 * チームによって異なるので具体的に定義できない
 * 生産性のボトルネックやストレスに対して脳みそを使う
 * サイロ化を防ぐ

== これから EM になる人へ

= あとがき

 * いかがでしたか、みたいな話を書く
 * 奥付

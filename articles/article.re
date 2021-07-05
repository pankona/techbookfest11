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
 * 組織運営 ... マネージャが集うミーティングや、組織課題に対する相談
 * チーム運営 ... 自チームの運営 (スクラムセレモニーや 1on1 を含む)

@<b>{ミーティングでない}に分類している 34％で、ミーティングで発生した宿題の消化や、チームメンバーから提出されたプルリクエストのレビューをこなします。さらに時間があまれば自身でコードを書きます。

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

=== 他のチームから持ち込まれる案件への対処

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
本章では私が EM 就任前後にどのようなことを考えていて、どのように不安を払拭していったかについて記載します。EM にこれからなる、あるいはなったばかりの方は、私と同じようなプレッシャーを感じている方もいるかもしれません。ここに記載する内容が、そういった方々の参考になれば幸いです。

== 就任前の想像

私が就任前に持っていた EM のイメージは、開発業務におけるあらゆる困り事を解決する人、という感じでした。

 * フロントエンド、バックエンド、バッチ処理に至るまでのあらゆる部分に詳しく、何か問題が発生すればトラブルシューティングを行い、たちどころに解決できる
 * チームビルディングに詳しく、さまざまなチームビルディング手法を用いてチームを立ち上げることができる
 * 開発プロセスに難があれば、やはりそれも解決する
 * チームメンバーをモチベートできる。チームメンバーのやる気がなかったら EM に責任がある

今思うに、要するに私は @<b>{スーパーマン}のようなものを思い描いていました。この想像は就任前の私にはそれなりにプレッシャーになっていたことを覚えています。

== 就任後の心境

実際に EM としての業務を始めていくと、当然ではありますが思い描いていたような動きはできない日々が続きました。
理想の姿と自分の能力のギャップが大きく、それを少しでも埋めようと毎日業務を終えてから 1on1 のやり方やチームビルディング手法などに関する書籍を読みふけったりしていました。

ただ、1ヶ月ほど経過する頃には少し心境も変わり、そこまで全能である必要はないし、そもそもイメージしていたような全能にはなれないと考えるようになりました。

=== 冷静に考えてスーパーマンはないでしょ

実際に私がイメージしていたような能力を備えた人物は、そういった人もたまにはいるかもしませんが、概ねの人はそうではないのが現実であろうと思います。
事実、EM になるからといって急にスーパーマンになることもできないわけで、結局のところ、現在の自分が持てる力をできるだけ発揮して仕事にあたる以上のことはできません、という至極当然な考えに落ち着きました。もちろんより良い EM になるために学習は続けるべきでしょうが、この考えを得ることで日々感じていたストレスともいえるプレッシャーはほとんどなくなりました。

==== スーパーマンというより女子高生

@<b>{もし高校野球の女子マネージャーがドラッカーの『マネジメント』を読んだら}という著書が一時期話題になりました。
この本はタイトルが示すように女子高生が高校野球チームのマネジメントをするお話なのですが、主人公たる女子高生は当然プレイヤーではなく、負けているときに代わりに打席に立つようなことはありませんし、抑えのピッチャーとして登板することもありません。ひたすら裏方に徹して、チームがうまく機能することを阻害する要因を取り除くことに尽力しています。

人によってさまざまな EM のスタイルがあるかと思いますが、個人的にはこの「もしドラ」スタイルが自分にはあっていそうと感じ、それからは以下のように振る舞うようにしました。

===== チームの主体はメンバー

自分でコードを書いて案件を進めたくなる気持ちをちょっと横に置き、困りごとが起きても必ずしも自分が手ずから解決する必要はない (そもそも解決できるとも限らない) と考えるようにしています。
私は、ややもすればあらゆる困りごとは EM が解決をするべき (できるような能力を備えているべき) と考えそうになってしまうことがありました。
メンバーの成長やよりサステナブルなチーム運用を考えるならば、私は出しゃばらずにそのままメンバー自身に頑張ってもらうことや、あるいは別チームにアドバイスを受けるためにコミュニケーションのハブとして動くほうが効果的でしょう。

===== 自分よりうまくやれるひとがチームにいるならばやってもらったほうが確からしい結果になる

幸いなことに、業務における概ねの事柄は私よりもチームメンバーのほうが詳しいという状況があります。
そういった点からも私は EM ではあるもののメンバーの上位互換ではないので、問題解決のために @<b>{誰が何が得意か}、@<b>{この問題は誰向きか}、を考え、自分を含めて @<b>{誰がこなすのが一番確からしい結果が得られそうか}という観点で作業を散らしていくようにしています。

====[column] EM になる前にした準備

私の場合、EM を打診されてから実際にその役割に就くまで 3 ヶ月ほどの期間がありました。その間、準備らしい準備は特にせずにただ時がくるのを待っていた感じではありましたが、@<b>{EM の仕事とは何か} というのを考え始めて社内文書にあたったり、Google 検索して出てくるマネージャ向けオススメ書籍を 2、3 冊読む程度のことはしていました。

ただ、EM になって一年ほどたった今、結果として思うことは、実際に EM をやってみないと的を射た準備をするのは難しいだろうということです。チームが抱える課題は千差万別であり、EM に必要なことはつまり @<b>{問題が何かを見極めて適宜手を打っていくこと}でしかなく、あらゆる場面で応用の効く準備をちょこっとした時間で習得するのは難しいだろうと感じています。

====[/column]

= EM ってどうよ

EM に対してどのような印象を持たれているでしょうか。なりたいと思われるでしょうか。
私はいろいろな人に EM について質問することがありますが、「EM って大変そう」「EM ってコード書く時間が減ってしまってつまんなそう」「技術的な成長がなくなってしまいそう」のような言葉を聞くこともしばしばです。

特に EM になることに関してはネガティブ寄りな言葉を耳にする割合のほうがやや多い気がしていますが、実際は楽しい要素も少なからずあると感じています。本章では私が思う EM の楽しいところやつらいところをあげていきます。

== 楽しいこと

まず、EM をやっていて私が楽しいと思うことをあげていきます。

=== 1on1

業務における困り事や悩み事をヒアリングするというのを第一の目的に、各メンバーと 1on1 を毎週 30 分ずつ行っています。

実際のところ、話題は困り事や悩み事だけでなく、最近の良いニュースであったり面白かったゲームの話題であったりといった雑談めいたものにまで及んでいます。
単なる雑談を通してでも、各メンバーがどういうものに興味を持つ性格なのか、私生活が忙しいのか、最近興味を持っている技術は何なのか、等を知ることができるチャンスになります。当然、私が知らない事柄に関する話題を話すこともあり、自分に見識を広げることができる点はポジティブな部分だろうと思います。メンバーの数だけ 1on1 をするので、メンバーの数だけこういった知見を得るチャンスに恵まれることになります (これは EM でなくても勝手に各々が 1on1 をすれば同じ効果を得られるという一面もあり、EM の特権というわけではないでしょう。しかし、EM が各メンバーと 1on1 を通してさまざまな情報を吸い上げることは立場上それなりに必然性があるため、実行に移しやすいと感じています)。

また、得られた知見はチームの構成やペア作業の組み合わせを考える役に立つこともあれば、他チームからヘルプを要請された際に誰に何を聞いたら良いかといったことを判断する材料になることもあります。自分の見識を広げつつ、業務にも活かせるという一石二鳥の施策なのでオススメです。

=== 戦略を変更する

EM がやりやすい仕事のひとつとして、@<b>{中長期的に健全なチーム運営をしていくために脳みそを使う}というものがあると考えています。

メンバーに比べると、進行中の案件からちょっと引いた立ち位置であることや、先述のとおり EM の元にはさまざまな情報が集まってくるという事情がこれをやりやすくしているのでしょう。
中には、放置しておくとチームがじわじわ機能しなくなってしまうようなものを感じる情報があったりもします。そのときに、たとえば現在進行中の案件をいったん止めてでも、問題解決に注力するように舵を切る選択がやりやすいのは EM であろうと思います。
戦略変更がうまく機能すると、コードを書いてものを作るのとはまたちょっと違った達成感や楽しさを感じることができます。

=== 採用活動

採用活動においては、数多の応募書類に目を通す必要があり、またその後は面接官をする場面も訪れます。

採用活動でもしない限り、他の人の応募書類に目を通す機会はそれほどないのではないでしょうか。
多数の書類に目を通すうちに、どのような書類だと目を引き注目してもらえるか、逆にどういう書類だとあまり好印象に映らないか、という感覚がだんだんついていきます。

面接についても同様で、普通はそれほど多く面接を経験する機会というのは得られないのではないでしょうか。
私はいまだに面接はするほうもされるほうも緊張しますが、とはいえ場数を踏んだことである程度安定した面接がこなせるようになったと感じています。

書類、面接に関する経験や知見は、もし自分が転職活動をする番がきたときには大いに有効活用できることと思います (なお、現時点で転職活動の予定はありません)。

== つらいこと

EM をやっていて、最初の一年でつらいと思ったこともあげていきます。

=== いわゆる Quick Win が得にくいこと

コードを書いて何かを作る作業というのは、作ったそばからものを動くのを観測でき、達成感を得やすい類に入ります。
一方、EM の仕事はどちらかと言えば @<b>{チームを健全に保つ}ことにあり、極端に言えば @<b>{何も問題が起こらないことが最も良い}とされる部分もありそうです (生産性を阻害する要因は無数にあるので、何も問題がないチームというのはないと思いますが)。

何も起こらないことに対して達成感を得るというのは、コードを書いて達成感を得てきた身からするとギャップが大きく、ややもすれば「自分は EM として何も仕事していないのではないか」等とも思いがちです。
チームが何かを達成したのであれば、それは EM も一緒に達成したのだ、と認識すればよさそうです。

=== メンバーの好き嫌いと向き合う

扱う技術、開発プロセスなど、可能であればメンバーの好き嫌いはすべて叶えていきたいと思うのですが、全員の要望をすべて叶えることには限界があります。
チームで仕事をしている以上、ある程度そういう齟齬が起こるのも致し方なしと思いますが、思うような決定に至らなかった人は長い間に渡って根に持っていたりする場合もあります。
我々はエンジニアである前に人間であり、そして人間とはそういうものと理解して寄り添うことも必要な場合もあるでしょう。

=== コンテキストスイッチが激しい

EM はその性質上、いろいろな案件のミーティングに招待されます。当然ミーティング毎にトピックが異なり、頭の切り替えがそれなりに負荷になります。
プレイヤーとしての作業も行う場合はミーティングとミーティングの隙間時間に作業を行うことも珍しくなく、なるべく高速にコンテキストスイッチを行う必要があります。

私自身、それほどコンテキストスイッチが得意なほうではないということもあり、捗らなかったときにチームメンバーの作業をブロックしてしまうような作業はなるべく取らないように心掛けたりしています。

=== プレイヤーとしての仕事を減らさざるを得ない

私は 10 年程度、基本的にはコードを書く仕事を生業として過ごしてきました。コードを書くことは趣味でもあり、好きなことと言って良いでしょう。
EM になるとコードを書く時間はどうしても相対的に減らさざるを得ません。ややもすれば 0 に近くなる EM もいるでしょう。いままでコードを書いて生活をしていた身からすれば、それで良いのかという葛藤もあります。

あまりにも書かないでいると技術的に疎くなってしまいう懸念もあり、私の場合は週に 20％ 程度は何らかのコードを書く時間に充てています。また、チームから提出されたソースコードレビューは、基本的にすべて目を通すようにしています。

=== フィードバック (評価) すること

良いフィードバックをすることはまったくつらくないですが、時としてネガティブなフィードバック (いわゆるダメ出し) をしなければならない場合があります。
ネガティブなフィードバックとは、メンバーに直してもらいたいところを告げて、具体的にどのように改善していくかを議論することです。

私は EM になる以前はネガティブフィードバックをしたことがほとんどなかったこともあり、いざ実施しようと思った際には強い心理的な抵抗があったのを覚えています。
ただ、本人のためを思えば伝えなければならないこともあると言い聞かせ、なるべく建設的な議論になるように言葉を選んで会話するようにしています。
またネガティブフィードバックは一度では済まないことが往々にしてあり、繰り返して伝えなければならないこともつらい要因のひとつです。

= 一年ほど EM をやった振り返り

本書を執筆している時点 (2021年7月) で、EM になってから一年ほどが経過しました。
振り返ってみるといくらか失敗だったと思う事柄もあります。本章ではその失敗をあげていきます。

これから EM になる他の方も似たような轍を踏む可能性があるのではないかと思い、同じ失敗をおかさぬような参考になれば幸いです。

== 失敗したこと

まず、もう少しうまくやれただろうと思う部分についていくらか触れていきます。

=== 自分がプレイヤーだった頃との差分についての期待値調整

EM になるとプレイヤーだった頃のように開発に参加できなくなるというのを薄々感づいてはいましたが、かなり甘く見ていたというのが EM になった当初の反省点です。

私が EM になった時点でのメンバーのいくらかは、それまで私がプレイヤーとして働いていたときから一緒に仕事をしていたメンバーでした。
当然、プレイヤーであったときの私の働きぶりの延長線上で私のことを見ます。私自身も、多少目減りはするもののある程度プレイヤーとしても活動できるだろう、と考えていました。

ですが実際のところは多少の目減りどころではなく、プレイヤーとしての貢献は半分程度になっていたと思います。
私が開発作業のブロッカーになってしまうこともしばしばあり、チームに迷惑をかけしまうこともありました。
加えて少し性質の悪いことに、このときはまだ私自身がプレイヤーとして貢献することに依存する心をかなりもっていたという一面もありました。

いまの私から当時に私にアドバイスできるとすれば、@<b>{自分自身をプレイヤーとして頭数に数えないくらいで十分である}と助言するでしょう。

=== 垂れ流すコミュニケーション

EM になったばかりの頃の私は、@<b>{チームメンバーに対し、情報は良いことも悪いこともオープンにする}という信念でやっていこうと考えていました。これはいまでも変わっていません。

ただ、だからといって私の上司から伝わってきた情報をそのままチームに垂れ流すことは、必ずしも良い結果をもたらさないということに気付きました。
特に、確度の著しく低い情報をそのまま流してしまうことはいたずらに不安を煽るような効果しかなく、またその情報が次の週には覆っているようなことがあれば混乱必至です。
当時の私はただとにかく垂れ流すようなコミュニケーションをしており、結果としてメンバーのモチベーションを削いでしまうようなこともありました。

オープンにするのは良いと思いつつ、@<b>{いつ、だれに、何をインプットするのが効果的か}という観点が大事であると認識しました。

=== 作業をメンバーに委譲すること

EM はチームの代表のような役割があるように思われていることがあり (実際そうかもしれませんが)、チーム外からもたらされる案件の一次受けとなる場合がしばしばあります。

私は「ひとまず話を聞いておこう。作業が発生したらメンバーの誰かにやってもらおう」と考えているのですが、もたらされた仕事が軽いものである場合は自分でやってしまうことがあります。
それだけ聞くとそれほど悪い話ではないように聞こえるかもしれませんが、以下のパターンの場合に少し都合が悪くなってきます。

 * 軽いと思っていた仕事が、実はそれほど軽くなかった
 * ひとつひとつは軽い仕事かもしれないが、気付くとそういったものがいっぱいある

想定外の作業が発生していくことにより、結果として自分の稼働が高くなってしまうことにつながったり、メンバーにヘルプを頼む (差し込み作業となることでしょう) といった事態に発展します。

委譲できない理由はだいたい分かっていて、私自身が @<b>{自分が聞いた事柄をふたたび誰かに説明をするのが面倒}と思っているためでしょう。
いずれにせよ、私が作業の委譲に失敗することはチームとしての仕事量がスケールしない結果をまねくことになります。いまだに苦手な部分ですが、改善していきたい点です。

== これからやっていきたいこと

次に、私がこれからの EM 生活でやっていきたいことについて記載します。

=== 定量的な分析に基づくチームビルディング

私が EM になって最初の一年間でやった EM としての仕事は、1on1 を通してメンバーの気持ちを伺い、それに対してなんらかの対策を打つ、というものが主でした。
これだとどうしても後手の対応になってしまいますし、また会話で得られるは必ずしも十分ではない (しゃべってくれるとは限らない) とも感じています。

計測できるものは計測し、より事実 (データ) に基づいた活動を行うことで、再現性のある @<b>{生産性のマネジメント}を行うことができるのではないかと画策しています。

 * 勤怠の情報 (稼働時間)
 * コミットしている数や pull request を提出している数
 * Slack 上での発言の量
 * etc...

これらがただちに生産性を表すメトリックスではないと思いますが、定点観測していくことで見えてくるものもあるはずです。
これらのメトリックスを自動的に収集して Datadog に表示できたら便利かもしれないですね。

=== 技術力を失わないために

EM はキャリアの終点ではなく、またプレイヤーに戻るタイミングがくると予想しています。
いつでも戻れるように、公私に渡って技術的なものに常に触れておくことを続けていこうと考えています。

 * コードレビューには必ず参加すること
 * 運用負荷軽減やトイル潰しなどの活動は隙間時間でもできるので積極的にやっていく
 ** ただし滞ると他のメンバーのブロッカーになりそうな作業をするときは慎重に
 * 技術的な発信 (ブログを書く、ライトニングトークで発表する) も

= まとめ ~ EM の仕事とは

私の場合はこのような EM をやっています、という例をここまで書いてきましたが、いかがでしたでしょうか。
だいたい似たような感じであると思われた方や、はたまた全然違う EM をされている方もいらっしゃるのではないでしょうか。

私の観測範囲における EM は、仕事の内容も困っていることも異なっていて、あまり共通点がありません。
これはつまり、EM の仕事を具体的に定義するのは難しいということを意味していて、やや曖昧な言い方をすれば「チームの生産性のボトルネックやメンバーのストレスに向き合い、解決に導くために脳みそを使う」というのが仕事になるのだと考えています。
メンバーがソースコードや設計で頭を満たすのと同じように、EM はチームの生産性やメンバーのストレスについてで頭を満たしましょう。


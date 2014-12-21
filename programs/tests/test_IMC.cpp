//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: e14c9111876f0e33244bd1b6ea555926                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.684560035723);
    msg.setSource(44492U);
    msg.setSourceEntity(20U);
    msg.setDestination(6981U);
    msg.setDestinationEntity(211U);
    msg.state = 134U;
    msg.flags = 6U;
    msg.description.assign("HMRAPGYELXTBHGRWAWTXQPQJRGNRNDHYEJYWTQICTRXZHFXOEHXPCVDSWALAEAYNBUQZYBFBVPCKWEVMVIBWXZZNDNBFUCOWNGNTGJWFUUGQVIOXRMSYAFGXMOIJM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.479767783125);
    msg.setSource(11869U);
    msg.setSourceEntity(200U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(217U);
    msg.state = 173U;
    msg.flags = 98U;
    msg.description.assign("ULTYMVEIGLXBPXJGHLQRBFEZBFVGOJWJKQHGJTBQAALSAQNMZRDWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.820523470181);
    msg.setSource(32804U);
    msg.setSourceEntity(183U);
    msg.setDestination(46054U);
    msg.setDestinationEntity(56U);
    msg.state = 4U;
    msg.flags = 137U;
    msg.description.assign("OQBBMRQPCJZIWOOGTOLSTRUMSKGTXXRBBYECCWPTFWBKYLPQSTUVZIEJCSGHPQDMEAFPFRFDYXWLPTGIQQLMLXYJXEBUEOJEGSVIWKHVYHJBRCNAXIAKMAEXJLUOMUDUYJROTNNUIKCLXVHSKCCPORIEHZYQAMFPYDKZDUMGQZWRUGDLUVFYVMTNKHIHMNSCZKFNZNAKPTWJIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.306788459766);
    msg.setSource(60342U);
    msg.setSourceEntity(157U);
    msg.setDestination(24555U);
    msg.setDestinationEntity(14U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.353492227382);
    msg.setSource(28738U);
    msg.setSourceEntity(78U);
    msg.setDestination(39036U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.867388931529);
    msg.setSource(40465U);
    msg.setSourceEntity(239U);
    msg.setDestination(30099U);
    msg.setDestinationEntity(22U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.958610623343);
    msg.setSource(38208U);
    msg.setSourceEntity(254U);
    msg.setDestination(53611U);
    msg.setDestinationEntity(228U);
    msg.id = 168U;
    msg.label.assign("WABXDABBGZCFHKJHGPFYOTLZSRHNELUQCDMDITWVQYMNMZMZVLRRRQWTMIUYYGNQDOHKTGXOCUFBGJNYQDCIFLJSGXTIAWEFJBHWSOLCMIQTMMDERYZVHJILPKEKWGPNCXIBAQTYVIOJCBROWLTIUOMYKPFSSNXJUOIWYVVSDEFZOPPSAUBEXXK");
    msg.component.assign("JNOKNURPEZYLBKOJUQCEKUXLTESBBPNGHMLSVEMMQUYCXCQMXCIXYXBLPFWAEDITELDZROYNJBATGUADFXFAJYTUIWCTRNTVFBJVPAQGUZMBQVGTWPBRGMMOHDCXJHIZAKKZVDNFHSNTZWIOOXWCRZHJLARSWLRVSSNDBPLEYHQOJZIHEYGUCKHKQYWTRGVKPMWFOJZVADQIMEYGWVFHDUGDLKFVINPIOXOAGSTDI");
    msg.act_time = 32920U;
    msg.deact_time = 6323U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.0559891662282);
    msg.setSource(13583U);
    msg.setSourceEntity(214U);
    msg.setDestination(36585U);
    msg.setDestinationEntity(9U);
    msg.id = 142U;
    msg.label.assign("MBJSQJXZDGWHWUQH");
    msg.component.assign("DVGSULPTSGGBCYCQXBWKYLDUEXSRHNZRGFZPQVRBZFULQEXCOCQLIWZAYQXFJDPNHAEGQWLRRSWCWGLFMKREYNKCHQXORCSCIMBNKOZTDHDOXABDTNVTFVMYUGXXNSKOWVMROSPAWZSHAYAKRWNJMTSFVEQTYKPPVVIXVDGYC");
    msg.act_time = 1722U;
    msg.deact_time = 55557U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.590853292095);
    msg.setSource(65523U);
    msg.setSourceEntity(20U);
    msg.setDestination(51296U);
    msg.setDestinationEntity(131U);
    msg.id = 213U;
    msg.label.assign("YIQKJMWOOLROWIRSFHZDVZSOGBXACDGEVKRFVRPPIGMVWEYDSAILINXRKPMQMLSOEIQFAEMTWRTDWMAJZFKBGPBUFBKHQXPATNSGUBZPJXEXGMBOUFDRACFLBTNYOHTYMWLIPECZHHQEJCSMACWLZJKHRWLVSZNZPO");
    msg.component.assign("SMPTTJBWKXCKTKEHPAHYDUWUNMPTSUCNITPPXLIHSBBDFWKQLQRZGQUADTWGGCYIAXNRGKLQFOHMESRYOVYKTLZLMBLCKSGNQFEYSIVFJMXOQHIWWEEALTOZCAINMFMVQFJUCEGOZYAGMP");
    msg.act_time = 48779U;
    msg.deact_time = 23906U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.0163116345947);
    msg.setSource(33764U);
    msg.setSourceEntity(220U);
    msg.setDestination(31518U);
    msg.setDestinationEntity(231U);
    msg.id = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.988764475004);
    msg.setSource(32531U);
    msg.setSourceEntity(84U);
    msg.setDestination(22878U);
    msg.setDestinationEntity(92U);
    msg.id = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.876308652372);
    msg.setSource(35179U);
    msg.setSourceEntity(251U);
    msg.setDestination(57317U);
    msg.setDestinationEntity(206U);
    msg.id = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.231654691302);
    msg.setSource(24163U);
    msg.setSourceEntity(115U);
    msg.setDestination(32953U);
    msg.setDestinationEntity(108U);
    msg.op = 184U;
    msg.list.assign("UPJJWRMXJJQTYXGCIJHCZNSDCPBAWBORSETUYDPJEYGKKEUGPQSLODVYUIFCKCOHCUCTQWBATSSFYYOHBTWULEQVXRWDHBCSNEAPYWJEBQMARWNOFJRDNMZWVZKNNEGARZFZUMORHMIOBFQLULDPVLHFCZMVMUXHDKISXXTJVDIQALZVIJGNXDYEBYVFVLIZKQFENKMWSSX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.500848375977);
    msg.setSource(21691U);
    msg.setSourceEntity(52U);
    msg.setDestination(16150U);
    msg.setDestinationEntity(249U);
    msg.op = 172U;
    msg.list.assign("HJRGQCQREESJGNCGUZMYCLDINHXFVASVEGVUYUXPTSZIVJZRBAIBWAQJNPUEDQQDYUPGPAXJENZLWBVZCOTBWCBJTKDGKYWFIGQVTTUAMSMLQAUXSLMNKRMCILKZHJZYYSVOCLDRCLVIOAEZDSUHAIHHCVHNQUUNRGFEAYFWOFDTIWRMBZWDGYGXXJXKCPBBWTJLAKHTXKFSFPKYFPROFSRBPVMPDLBIHOMTNJYQEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.391538974775);
    msg.setSource(16175U);
    msg.setSourceEntity(153U);
    msg.setDestination(11158U);
    msg.setDestinationEntity(4U);
    msg.op = 91U;
    msg.list.assign("KYKYESMOXIYFBXOPEVXVDQQEFUUHSPOPGWZZYXQZUCOMDLIRJMMWQOFITDCPNBPIZQECBVOLGHJDAHPBAULNJDFTASSWAYAXJFLDCQSZMHVTNNSRCNZOGGCMEFOBLPKSTHHCWYGURZVCQWEYZLBVKFHTKUWLVQRAAFJMRVHYBRTXPBNAOYICKUTTJEXDUWZRXWURFSRIPJWSNHELJUNFQPDRQNDIZKGSGMGDBVKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.512318130151);
    msg.setSource(45217U);
    msg.setSourceEntity(199U);
    msg.setDestination(60120U);
    msg.setDestinationEntity(207U);
    msg.value = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.766293175484);
    msg.setSource(45839U);
    msg.setSourceEntity(198U);
    msg.setDestination(34777U);
    msg.setDestinationEntity(253U);
    msg.value = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.990014871137);
    msg.setSource(24441U);
    msg.setSourceEntity(64U);
    msg.setDestination(58329U);
    msg.setDestinationEntity(186U);
    msg.value = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.399837907505);
    msg.setSource(48476U);
    msg.setSourceEntity(218U);
    msg.setDestination(51900U);
    msg.setDestinationEntity(189U);
    msg.consumer.assign("PCWIHEZIGTPKQQZARYGLCLMSQQVFAOGRLHDHETMEKFLCHYVQGEKOBJUNTBXPKIAHSEUDKUEXLEQFJBVFUTPIVCONOQIDIMRYSFSZPCQWJKUNOSDYYNZ");
    msg.message_id = 4563U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.115502217901);
    msg.setSource(50651U);
    msg.setSourceEntity(36U);
    msg.setDestination(43297U);
    msg.setDestinationEntity(69U);
    msg.consumer.assign("BRLCBORQFXKLSUAXVPJQGIAAQNSPMODOJYGMNFQBPFUWHTZWXKYIYDPFERUJREZZFJ");
    msg.message_id = 50816U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.232854373108);
    msg.setSource(45040U);
    msg.setSourceEntity(117U);
    msg.setDestination(38168U);
    msg.setDestinationEntity(57U);
    msg.consumer.assign("DDHRPMJZFLSGKNEKTMWTTTXAZWQDYQVKPGNIIEACQVBFDLEJLTKHKJEZUBQRCAFVYFPWXMMIHILNDQSHEBKGOAFNGIRQJXCMMXEISQXZTCHSJIZTBSHGBYWOXTOPSOFRYYNULYGYIVJEKGUANDPVNKWACMARWOEYCUZCWACRJCFODBKGLBLHFZUDUXKVRRQUXXUZARZNIQBFVTOUYQISOPVMZPLWJSMGSP");
    msg.message_id = 1137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0671827688846);
    msg.setSource(22086U);
    msg.setSourceEntity(246U);
    msg.setDestination(28948U);
    msg.setDestinationEntity(246U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0552094373);
    msg.setSource(37416U);
    msg.setSourceEntity(219U);
    msg.setDestination(13312U);
    msg.setDestinationEntity(10U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.175521725179);
    msg.setSource(36767U);
    msg.setSourceEntity(79U);
    msg.setDestination(32044U);
    msg.setDestinationEntity(151U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.032510521267);
    msg.setSource(17391U);
    msg.setSourceEntity(197U);
    msg.setDestination(10528U);
    msg.setDestinationEntity(16U);
    msg.op = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.811912215867);
    msg.setSource(58935U);
    msg.setSourceEntity(105U);
    msg.setDestination(22403U);
    msg.setDestinationEntity(45U);
    msg.op = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.613268573898);
    msg.setSource(54318U);
    msg.setSourceEntity(39U);
    msg.setDestination(19521U);
    msg.setDestinationEntity(23U);
    msg.op = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.746672084023);
    msg.setSource(13157U);
    msg.setSourceEntity(172U);
    msg.setDestination(1687U);
    msg.setDestinationEntity(147U);
    msg.total_steps = 231U;
    msg.step_number = 156U;
    msg.step.assign("FADVERMNITSNPHJJBVGWUVKRWHUTVWSELUYAQKFTFPHVGEPDCXRJVTJSQJRDYQEOBIRBUOULWIFHCHLOYSCPZEBCKPGMLSQWBYGPDIMQVBISIEORMZOBNQNAKADODZXUFMQXPDZNZNAXYMJMPCIMIJEXASZBMZUOTYKWGKYKIMWVRSATEJPXDTWFOLZOHFGJHTKQSTQDV");
    msg.flags = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.848261010972);
    msg.setSource(64958U);
    msg.setSourceEntity(73U);
    msg.setDestination(18953U);
    msg.setDestinationEntity(152U);
    msg.total_steps = 152U;
    msg.step_number = 15U;
    msg.step.assign("GPBRKCOJEUTRXSWWKCHJNEXMIULFMTVGWLFKAZOBRVVUSIBQZDPMXTBKCPCEOSISTBCEZWGWQEZMKAJMSJWTSPZLVBYZDOCTXAEQXCYTTBBOUYGQKYPMVRNHDPAEGHGNURNQIEOARXTDQFZNYDJHQRYEGVFHZIAUZOECXUGIUFLB");
    msg.flags = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.424858152762);
    msg.setSource(35575U);
    msg.setSourceEntity(132U);
    msg.setDestination(22909U);
    msg.setDestinationEntity(45U);
    msg.total_steps = 149U;
    msg.step_number = 162U;
    msg.step.assign("GJEEIVFQYUADQMUHTOIMGTHDMPIURXKMIVKUZWDGQKMBJVBEEKZUYFVLYCOZZSCACDZBHNARLYHPODMASXXPTTRNVNMNFDRWTHXOVFDUVYBROBGHQKCBOSUQSXRZBXOPFWEMAWJAIGHZJTDPLWNJJNPSXPJBGLURNEASGLFHFC");
    msg.flags = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.00165236363561);
    msg.setSource(35198U);
    msg.setSourceEntity(50U);
    msg.setDestination(44830U);
    msg.setDestinationEntity(240U);
    msg.state = 2U;
    msg.error.assign("TKFFPPBSBTSMZDAATMYFMLMELOTSFGUQKOBUBLOKKFIOVNJHEHZMXRZTYQFRYLSTQBGMURYXEOZPZJINRCRKQFQXROJDHVJPJOXYCGPWVDWEYNYMGPGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.958039002999);
    msg.setSource(64533U);
    msg.setSourceEntity(161U);
    msg.setDestination(11699U);
    msg.setDestinationEntity(66U);
    msg.state = 147U;
    msg.error.assign("GAQBLMCKBEZVBXAGPMTPGYEPJWYDOVUCYFEIVXVMGTIVCKUWNDRDDLKPMAFCQHACGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.0957628078535);
    msg.setSource(29826U);
    msg.setSourceEntity(150U);
    msg.setDestination(56192U);
    msg.setDestinationEntity(193U);
    msg.state = 195U;
    msg.error.assign("COPWRGZROJXRUCJCKZMASWVSVELAMJENZRKYTRCDVEAFIKUZFYBTTYLQIMDUXBMGGXMIEXTUTJOOTOSPLOEBDXIVGJVUMPYAHJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.588588314541);
    msg.setSource(4758U);
    msg.setSourceEntity(80U);
    msg.setDestination(18400U);
    msg.setDestinationEntity(230U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.316940706332);
    msg.setSource(11805U);
    msg.setSourceEntity(42U);
    msg.setDestination(64141U);
    msg.setDestinationEntity(23U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.990569126478);
    msg.setSource(36739U);
    msg.setSourceEntity(43U);
    msg.setDestination(38152U);
    msg.setDestinationEntity(78U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.915334853241);
    msg.setSource(58220U);
    msg.setSourceEntity(73U);
    msg.setDestination(18888U);
    msg.setDestinationEntity(102U);
    msg.op = 46U;
    msg.speed_min = 0.752199450474;
    msg.speed_max = 0.715414693371;
    msg.long_accel = 0.988557946677;
    msg.alt_max_msl = 0.767003001363;
    msg.dive_fraction_max = 0.89318116597;
    msg.climb_fraction_max = 0.978646650969;
    msg.bank_max = 0.690608456471;
    msg.p_max = 0.643461488696;
    msg.pitch_min = 0.87920546039;
    msg.pitch_max = 0.492283335798;
    msg.q_max = 0.759327931755;
    msg.g_min = 0.283777547782;
    msg.g_max = 0.603645198109;
    msg.g_lat_max = 0.474646675877;
    msg.rpm_min = 0.469152982675;
    msg.rpm_max = 0.35360048138;
    msg.rpm_rate_max = 0.34860556085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.835789186751);
    msg.setSource(27181U);
    msg.setSourceEntity(32U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(60U);
    msg.op = 10U;
    msg.speed_min = 0.268380536066;
    msg.speed_max = 0.338418525114;
    msg.long_accel = 0.0792931501878;
    msg.alt_max_msl = 0.757235971581;
    msg.dive_fraction_max = 0.555388161183;
    msg.climb_fraction_max = 0.103934645374;
    msg.bank_max = 0.238306371266;
    msg.p_max = 0.281576955756;
    msg.pitch_min = 0.930352337237;
    msg.pitch_max = 0.492681678172;
    msg.q_max = 0.716203471065;
    msg.g_min = 0.404996065063;
    msg.g_max = 0.882655554819;
    msg.g_lat_max = 0.93267962235;
    msg.rpm_min = 0.156982894935;
    msg.rpm_max = 0.633380391506;
    msg.rpm_rate_max = 0.538849808704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.105252162342);
    msg.setSource(44858U);
    msg.setSourceEntity(42U);
    msg.setDestination(27472U);
    msg.setDestinationEntity(170U);
    msg.op = 11U;
    msg.speed_min = 0.0124370110625;
    msg.speed_max = 0.619015261052;
    msg.long_accel = 0.372743256162;
    msg.alt_max_msl = 0.693212779269;
    msg.dive_fraction_max = 0.775273814264;
    msg.climb_fraction_max = 0.891595154325;
    msg.bank_max = 0.684283792191;
    msg.p_max = 0.932950465622;
    msg.pitch_min = 0.113175716972;
    msg.pitch_max = 0.962984165063;
    msg.q_max = 0.366863418614;
    msg.g_min = 0.2745400627;
    msg.g_max = 0.0354426629313;
    msg.g_lat_max = 0.100823481755;
    msg.rpm_min = 0.613898992237;
    msg.rpm_max = 0.673724475356;
    msg.rpm_rate_max = 0.873356773215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.72745406204);
    msg.setSource(19537U);
    msg.setSourceEntity(135U);
    msg.setDestination(57238U);
    msg.setDestinationEntity(23U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.773712706944);
    msg.setSource(18984U);
    msg.setSourceEntity(192U);
    msg.setDestination(25272U);
    msg.setDestinationEntity(51U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 38644U;
    tmp_msg_0.sys.assign("EUVHDQZEQHGPPBDFFRKKTELDWGIEXYTXDZPHKTILGJSSFZIRBYXBOXCSRMRZXILGAQYYQCWYNEAXBLXVNQPEILUJFUWKRLMNDOUJDRBCKZTAWFOUAFIRFJQRVHLRSPHCIEXNVUFGPTUVWWPFDBXKHOJYUMMRBYIBSOINSUVLCGCHQVOZVSEAMLHTAQAMJAIHYOKGQM");
    tmp_msg_0.value = 0.593538243843;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.00041969139778);
    msg.setSource(60721U);
    msg.setSourceEntity(117U);
    msg.setDestination(12246U);
    msg.setDestinationEntity(114U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.111514325825);
    msg.setSource(35350U);
    msg.setSourceEntity(70U);
    msg.setDestination(53902U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.625807525463;
    msg.lon = 0.475569077313;
    msg.height = 0.864398029112;
    msg.x = 0.882395182433;
    msg.y = 0.939927953839;
    msg.z = 0.138815121443;
    msg.phi = 0.386083233124;
    msg.theta = 0.0774795019041;
    msg.psi = 0.963197406565;
    msg.u = 0.781845160349;
    msg.v = 0.668171459964;
    msg.w = 0.914402334916;
    msg.p = 0.113741767744;
    msg.q = 0.748371082794;
    msg.r = 0.613093346345;
    msg.svx = 0.433382471486;
    msg.svy = 0.692045401159;
    msg.svz = 0.00563417904275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.871027280518);
    msg.setSource(1224U);
    msg.setSourceEntity(64U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.202988151672;
    msg.lon = 0.953743838683;
    msg.height = 0.704610367413;
    msg.x = 0.715341354713;
    msg.y = 0.466345892508;
    msg.z = 0.206072136437;
    msg.phi = 0.18224517889;
    msg.theta = 0.144245745119;
    msg.psi = 0.12236673764;
    msg.u = 0.662965963234;
    msg.v = 0.456669405135;
    msg.w = 0.43796499824;
    msg.p = 0.764562881838;
    msg.q = 0.972334051735;
    msg.r = 0.583205419945;
    msg.svx = 0.144073228775;
    msg.svy = 0.202049500324;
    msg.svz = 0.729018711842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.77362047488);
    msg.setSource(40453U);
    msg.setSourceEntity(40U);
    msg.setDestination(14708U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.98704123427;
    msg.lon = 0.406309027252;
    msg.height = 0.00761562844917;
    msg.x = 0.684835633127;
    msg.y = 0.829114106811;
    msg.z = 0.120897045587;
    msg.phi = 0.495842851555;
    msg.theta = 0.97245913127;
    msg.psi = 0.651740402216;
    msg.u = 0.219030720049;
    msg.v = 0.91597435048;
    msg.w = 0.243517062186;
    msg.p = 0.851732256814;
    msg.q = 0.856342013627;
    msg.r = 0.808613373402;
    msg.svx = 0.704932959314;
    msg.svy = 0.577009986047;
    msg.svz = 0.00821540886012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.863618287364);
    msg.setSource(8685U);
    msg.setSourceEntity(212U);
    msg.setDestination(55577U);
    msg.setDestinationEntity(110U);
    msg.op = 223U;
    msg.entities.assign("LJHWYPCRRAHCKAFOLGALDVOAUJQNBEVLVUXZCOYZCZKESQMBKHEPAGUTOJXJGSEQYFIQHTXLNIJFLKFHCDURHEMQZYPMAODURBSSSGOHBWSCHNQSTXMXIFYKVKYJRKKFZIUAJACQMWSOZYXWGIUSUWMNRLTWNWDKTCKWGFXNVZODXRBAYLBJVFDJQWLDPSGVTPLMRPARWPINEBXTCDOFIEMBDIOUYMPENP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.674196514239);
    msg.setSource(20345U);
    msg.setSourceEntity(163U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(195U);
    msg.op = 176U;
    msg.entities.assign("YFELZBRUKTIGOFIEBGVMRMMKIWYLCJMAUTINADLLOWSWTDUEWLIPKIQVKVWXAMUEDLHCUQQCHXJRUYPGXBFFBHNYGZQDMJHMWJQVZUCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.857594251266);
    msg.setSource(5989U);
    msg.setSourceEntity(65U);
    msg.setDestination(41683U);
    msg.setDestinationEntity(25U);
    msg.op = 1U;
    msg.entities.assign("UTYRDUNQUXIWPBGOSFNGPNYVSGVJMJVRCWXPOZIUHKCMTITECJDYRKHMIZLVEDAMIHFISBWASFLGTQEHZCQHNGXOWGJSYLJDBOBDVUJWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.340122822117);
    msg.setSource(34173U);
    msg.setSourceEntity(215U);
    msg.setDestination(7307U);
    msg.setDestinationEntity(244U);
    msg.type = 24U;
    msg.speed = 62579U;
    const char tmp_msg_0[] = {85, 40, -34, 19, 28, 94, -86, -21, 52, 11, 60, 65, 27, 98, 6, 108, -63, -13, 51, -11, 8, -8, -14, 29, 36, -5, 53, -67, -106, -13, 33, 42, 41, 22, 118, 120, -3, -14, 103, -96, -120, -6, 94, 25, 83, -78, 69, -19, 18, -112, -115, -20, -50, -71, 34, 120, 33, 55, 2, 6, -74, 43, 102, 120, -45, 57, -70, -18, 25, -54, -15, -46, -35, 0, -103, 43, -115, -118, -57, 101, -91, 44, -59, 27, 27, -57, 80, 69, 73, 106, -97, -12, -94, 26, -12, 84, -94, -46, 125, -22, 75, -15, -15, -37, 81, 80, 62, -12, -71, 11, -21, -56, -110, -44, 110, 31, 87, -113, -112, -92, -84, -74, 4, 46, -3, -19, 19, 27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.00540755069998);
    msg.setSource(41815U);
    msg.setSourceEntity(12U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(172U);
    msg.type = 43U;
    msg.speed = 7690U;
    const char tmp_msg_0[] = {103, 113, 89, 74, -70, -108, -78, -45, 18, 78, -63, -56, -25, -13, -120, -93, -80, 52, 69, 100, 126, 72, 8, -79, -8, 93, -57, 82, -112, 36, 24, -44, -74, -78, -92, 89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.953157404437);
    msg.setSource(40748U);
    msg.setSourceEntity(195U);
    msg.setDestination(37658U);
    msg.setDestinationEntity(177U);
    msg.type = 51U;
    msg.speed = 37749U;
    const char tmp_msg_0[] = {-4, -69, -39, 93, -100, -103, 29, 99, -50, 93, -110, 48, -48, -103, 49, -83, 118, 37, -94, 78, -15, 124, 106, -3, -30, 113, 97, 27, 27, -114, 27, 29, -13, 96, 0, 22, -3, 30, -40, 77, -15, -106, -5, 110, -65, -54, 2, -78, -47, -18, -63, 13, 63, -87, 29, -8, -68, -7, 5, -114, -111, -33, -61, -78, -13, 99, -127, -112, -66, 34, -63, -43, -91, 110, 74, 18, -16, -26, 83, 52, 95, 26, 82, 95, 88, 46, 4, -124, -78, 73, 112, -25, -45, -18, 59, -38, -87, -51, -120, 121, 27, -123, 58, 102, -116, -105, 113, -68, -67, 75, 85, -122, 75, 58, -24, 43, -121};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.221356035178);
    msg.setSource(6419U);
    msg.setSourceEntity(27U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(139U);
    msg.op = 78U;
    msg.tas2acc_pgain = 0.964629775457;
    msg.bank2p_pgain = 0.215047194967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.17990647164);
    msg.setSource(12428U);
    msg.setSourceEntity(33U);
    msg.setDestination(40416U);
    msg.setDestinationEntity(147U);
    msg.op = 238U;
    msg.tas2acc_pgain = 0.289634908029;
    msg.bank2p_pgain = 0.477158041817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.630258080126);
    msg.setSource(59491U);
    msg.setSourceEntity(72U);
    msg.setDestination(3614U);
    msg.setDestinationEntity(253U);
    msg.op = 13U;
    msg.tas2acc_pgain = 0.33986691538;
    msg.bank2p_pgain = 0.948145518509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.969186629563);
    msg.setSource(12977U);
    msg.setSourceEntity(104U);
    msg.setDestination(46924U);
    msg.setDestinationEntity(87U);
    msg.available = 644805023U;
    msg.value = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.227064023402);
    msg.setSource(27110U);
    msg.setSourceEntity(145U);
    msg.setDestination(4620U);
    msg.setDestinationEntity(227U);
    msg.available = 532335582U;
    msg.value = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.904384188032);
    msg.setSource(65242U);
    msg.setSourceEntity(240U);
    msg.setDestination(63163U);
    msg.setDestinationEntity(115U);
    msg.available = 2828145565U;
    msg.value = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.0659266064627);
    msg.setSource(14223U);
    msg.setSourceEntity(171U);
    msg.setDestination(23234U);
    msg.setDestinationEntity(121U);
    msg.op = 225U;
    msg.snapshot.assign("WJUQDTLGMGPTMBWMBQPFUUHSMKAKRFYEMMZAKOITPDPCTGHAAUHBZYFROGNLCXRRDBXAAYUQSLNWKRDEMONXCBXRIFPTJYFGLKOQLKTDNUIMKHEOSEGRWQBLWTGVUVDFVJKHFVJFUQWEPRAYIQS");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 19072U;
    tmp_msg_0.lat = 0.365771089716;
    tmp_msg_0.lon = 0.590071003537;
    tmp_msg_0.z = 0.828586796919;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.speed = 0.232803347112;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.roll = 0.210507332804;
    tmp_msg_0.pitch = 0.299457274933;
    tmp_msg_0.yaw = 0.747934171731;
    tmp_msg_0.custom.assign("SJBLKNFVEXUFY");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.520600742064);
    msg.setSource(45497U);
    msg.setSourceEntity(31U);
    msg.setDestination(23727U);
    msg.setDestinationEntity(64U);
    msg.op = 64U;
    msg.snapshot.assign("KHXWJFBOJFKDJQIULXRIWWMLWEGBYKIKRFSYNKBDFZNIXZXXUJHUIVWN");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.683008377753;
    tmp_msg_0.speed = 0.0785662360459;
    tmp_msg_0.turbulence = 0.640612758245;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.706414516341);
    msg.setSource(28239U);
    msg.setSourceEntity(111U);
    msg.setDestination(43552U);
    msg.setDestinationEntity(22U);
    msg.op = 79U;
    msg.snapshot.assign("KZUMBQKJWZGFXAHEPWCGDPMMQWREFDBOZYDLUCXMYBUAIGSHCQWLDMUPGLHJWFRSFRNEQXPITTLXJOYRQTSZQIDREJLZXJHLQIOIRBQKVGNTMAUKDYNBFNFLG");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0155442473454;
    tmp_msg_0.lon = 0.353232694399;
    tmp_msg_0.height = 0.346339705692;
    tmp_msg_0.x = 0.912844747366;
    tmp_msg_0.y = 0.826386681744;
    tmp_msg_0.z = 0.00997721793867;
    tmp_msg_0.phi = 0.626534029183;
    tmp_msg_0.theta = 0.413823491857;
    tmp_msg_0.psi = 0.650960758944;
    tmp_msg_0.u = 0.425923032302;
    tmp_msg_0.v = 0.933486762717;
    tmp_msg_0.w = 0.799532264048;
    tmp_msg_0.vx = 0.597619658648;
    tmp_msg_0.vy = 0.661220947846;
    tmp_msg_0.vz = 0.524205069657;
    tmp_msg_0.p = 0.41332661564;
    tmp_msg_0.q = 0.680266709892;
    tmp_msg_0.r = 0.64817051826;
    tmp_msg_0.depth = 0.518181156414;
    tmp_msg_0.alt = 0.658139471629;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.675154703538);
    msg.setSource(48254U);
    msg.setSourceEntity(170U);
    msg.setDestination(19030U);
    msg.setDestinationEntity(221U);
    msg.op = 117U;
    msg.name.assign("DWDJPGRHZZPUXUIRZVSVKWFFKNWDBLCRPAIQNNBWJPSSZVFYXHNEYVOTSHDTVEJBKZDTWQRDVSKVQTVEBALRDNEOPQOOMFWXACZRKYGZSIAXORGCCFIMJYNMMGUIJNKLIQSLQXMUDJBJAVTXOBESELPIYPJXP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.598653243541);
    msg.setSource(57370U);
    msg.setSourceEntity(222U);
    msg.setDestination(1641U);
    msg.setDestinationEntity(143U);
    msg.op = 207U;
    msg.name.assign("UALITUYFZGTGKUBWACTCJUQDZQJZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.734492165318);
    msg.setSource(29723U);
    msg.setSourceEntity(237U);
    msg.setDestination(37682U);
    msg.setDestinationEntity(13U);
    msg.op = 79U;
    msg.name.assign("UYCDUENRSLVVCEGVWDZNEVEZKOZVWBUMELARJGPCJPAMCJUWYQRPXXGQHFBBKVZTUERTAKNAYDXNGBWDMKOYGIISADVSOWWVQBQLLGPUHACTQNNQQMJMFSJHIKCXIXPBULAEVQWNMKSHDPYUKWCSNERTGXZNZDPQTJIHMXNMTAYMWEKHCLFJFTIFHBGGYFSPKLRIAMJWUYGZLRZBDFOIRXCVEFYOROQPFBTZYAFLCJSOUXLDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.210613768207);
    msg.setSource(2244U);
    msg.setSourceEntity(204U);
    msg.setDestination(22207U);
    msg.setDestinationEntity(80U);
    msg.type = 0U;
    msg.htime = 0.76463452432;
    msg.context.assign("TWANXDNOGJLYJAHMWWHVSJXLIICEGBVVCPTEKLKLHIJRFWQHBPLBABFMGYRKDTXOABNDSKPQOAKGQZOFWCXMEACWSUUZXKQJFRDXIPZEYWENQDMFXYNIOVARKLVVUFTZDIDNZMATFZPKMCYHOOBPUHTTUURXB");
    msg.text.assign("NUXSPYLAVRPWPZKTHPTKXFGOLFKWUEYSICZYQNTZDESRYXUNJKCHNCPKEQGEABDQBKBXATAAMEYBHZMIQYZFFGLFIUIIJSGLAUECXTFXSXNHZFYDNMPBGRZAMLYBVOQOCFGKTRYIIGUILHNJZDCDFNMOQOOIHCKAOTSRJMBVVHWLOXWBSKGRDGUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.463095169912);
    msg.setSource(997U);
    msg.setSourceEntity(212U);
    msg.setDestination(51988U);
    msg.setDestinationEntity(230U);
    msg.type = 66U;
    msg.htime = 0.932394642735;
    msg.context.assign("MBJRZTHZSHPPXVJUGEITPFDBCXUGHRKNCMKXAKJKYGNPHJRTCIYQVXMULUNEFMAJOBJZQIRWZQLESSVBU");
    msg.text.assign("XEWLOFHJDGASUFSREEXKDMYBNBFVHTXIFLZDULSMSYCKJIYCFVJKOQTRTLSUDNRFQBVGGPBXIXZVGPAIQDIFNLOZTCTIFTWHTVHPJBWLBWGDLCOZUKZNPPKPRMUTSIUDXEPXHAGWNXACMKJEZYRIJTJGDWCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.0883456871637);
    msg.setSource(45293U);
    msg.setSourceEntity(236U);
    msg.setDestination(3264U);
    msg.setDestinationEntity(62U);
    msg.type = 173U;
    msg.htime = 0.661369718804;
    msg.context.assign("CEFMUZKLFCPVLGDXRNVCPDVQJCKIGCKDOXHIWATDWLRPVWVEPFWETMRTZIQRTUXHBNBKENLOSRGSMRJJSNZRAEAYYCMIPSLBHOGSQNXLYKBZVBLDHPJBXULPEYWUHZMURSEQASNDGNIOTOTGDFOJYXMZIAXADKMYODTMEHWOIIAUQXCZ");
    msg.text.assign("RLRCPBLQFVWNRXERPESFHBJKQDBDCXSVAGJCQYPTBYHAFWVKTIAAHSPTMLAGCFKVFUROSCKMBOPJKQUZLOGUXUYJSOUYMZJVWWMAJKQZQBKWGXECFOHJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.990127585002);
    msg.setSource(26160U);
    msg.setSourceEntity(192U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(75U);
    msg.command = 185U;
    msg.htime = 0.19153232559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.460385026081);
    msg.setSource(52383U);
    msg.setSourceEntity(93U);
    msg.setDestination(1386U);
    msg.setDestinationEntity(227U);
    msg.command = 24U;
    msg.htime = 0.753940341765;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 185U;
    tmp_msg_0.htime = 0.0775541267556;
    tmp_msg_0.context.assign("JCOWALGTCGOZOWLQVGSPXAXABYGHIRSNUUVFXJXLMNPDDCSJBPUAJZODTCZYJMKNMSJNESIMKVTTXWUNBYHRIZYPKWVCWQIBRGLAMQEB");
    tmp_msg_0.text.assign("XDZTCYJFNNXBOUDETRLHWYNMCLMVZVWZMWDOEUHAATKCIDJHWSWMVIRHXLSPLFCVGYDDVJBPBYPVOFFCRUGEDVQIKLUHTGGMYXPFKTVZVJLPWCITIZRBVXPXENMUKIKFHOMHPYINKZOKYIWAFUSPEQXQASBRQQYHDAUGQ");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.181515838242);
    msg.setSource(63534U);
    msg.setSourceEntity(181U);
    msg.setDestination(28287U);
    msg.setDestinationEntity(187U);
    msg.command = 109U;
    msg.htime = 0.401164998419;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 60U;
    tmp_msg_0.htime = 0.283621258824;
    tmp_msg_0.context.assign("HOAZOUGVYPRWAHUQN");
    tmp_msg_0.text.assign("OFQRRWIJTUNKGORNBGTLLYSBGQQOXGPKDQFDJZQZBBYFSHYMOGOWGACVUXXEKNTVVEAWVVNZUQMLGDUHYMHYOAZBAUCDJNXQMLAWGYKJFCILHBDLAOJ");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.0350457465124);
    msg.setSource(8608U);
    msg.setSourceEntity(174U);
    msg.setDestination(4320U);
    msg.setDestinationEntity(35U);
    msg.op = 77U;
    msg.file.assign("SQHOGPCDBZLSKDUDTEPDLJYTNBIBDYFWXUMQQZWWHCFSZTRYHXACMJXOFUTIMVIQIMZLFHGVNPAVMER");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.934302543128);
    msg.setSource(2745U);
    msg.setSourceEntity(141U);
    msg.setDestination(60599U);
    msg.setDestinationEntity(247U);
    msg.op = 244U;
    msg.file.assign("MSXVOLBJOJLVKCCJPCYLBEHXHFHTZQJNCQESDHVUGUUWZYDDWDWIRNKYTSTGUXXWGYITHJFXWUIKSAKEWVKSEGGPNNPNNXSZLEQYWPNLTJVMVUXTOQHMOOYKARYTPMFYESROLTMOEDDBBIUHPRIIOSSXPNLPTFRGKCRYAIQLCERFVWAMPFMGCDOKRHQIKXQDGKMVNAMZAILBVXYAPAZDCBSJFFIWUEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.22301111483);
    msg.setSource(50108U);
    msg.setSourceEntity(111U);
    msg.setDestination(52784U);
    msg.setDestinationEntity(134U);
    msg.op = 61U;
    msg.file.assign("RHPWEIVDSMJBGIDNJQYXZVEAHVHHHLIYBSAEQZDIUTKENFAPFRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.658493130315);
    msg.setSource(14631U);
    msg.setSourceEntity(0U);
    msg.setDestination(38257U);
    msg.setDestinationEntity(5U);
    msg.op = 227U;
    msg.clock = 0.436169952328;
    msg.tz = -92;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.182325362355);
    msg.setSource(13342U);
    msg.setSourceEntity(253U);
    msg.setDestination(53734U);
    msg.setDestinationEntity(85U);
    msg.op = 233U;
    msg.clock = 0.995688384462;
    msg.tz = -2;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.223650872665);
    msg.setSource(22661U);
    msg.setSourceEntity(138U);
    msg.setDestination(37975U);
    msg.setDestinationEntity(83U);
    msg.op = 100U;
    msg.clock = 0.605687843888;
    msg.tz = -110;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.255078195097);
    msg.setSource(49219U);
    msg.setSourceEntity(68U);
    msg.setDestination(22765U);
    msg.setDestinationEntity(115U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.431605317304);
    msg.setSource(26804U);
    msg.setSourceEntity(207U);
    msg.setDestination(8845U);
    msg.setDestinationEntity(84U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.874745318157);
    msg.setSource(65085U);
    msg.setSourceEntity(155U);
    msg.setDestination(55133U);
    msg.setDestinationEntity(111U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0680105232915);
    msg.setSource(32614U);
    msg.setSourceEntity(140U);
    msg.setDestination(53901U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("FMFAXDHIUVZSIPUSLNFPPZSCMEDMWPXJUOKKJTUSKLGYKSRTURQPRELMADQWXZFRGIDXBHRGSKLKCVPTRJWVUNCEBIXMPSFHNXTZCQERJGECXAUNWSTTGMIUHUJESOYVYETILEANGQYWDGJIZYBBOLVKZJAQUQQCTCVHDNYFAZDBOQ");
    msg.sys_type = 106U;
    msg.owner = 12920U;
    msg.lat = 0.744267017599;
    msg.lon = 0.902605454092;
    msg.height = 0.0306816685999;
    msg.services.assign("GQBCWPOCHBCKFUOJGGPAJLNUMIXYFETUEQKZNALJOZRBOFBJFEHHAJABNKLEZXORSKDDCOVHZKBDSUGYIQQNVWWRQLYUSAEDHJVWXUHDMYDTTXTESRIVHXJYWYBGQODTERUGXOSCLUCCFIITDVTAMNVZWPHRGEVMDANTFXMBLGQJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.764897838778);
    msg.setSource(28219U);
    msg.setSourceEntity(103U);
    msg.setDestination(65009U);
    msg.setDestinationEntity(235U);
    msg.sys_name.assign("YWBRLMJCGSHPXVQGSQJYUVJKPWTIUSXOCGFSMKITATQVDS");
    msg.sys_type = 154U;
    msg.owner = 3526U;
    msg.lat = 0.482669299778;
    msg.lon = 0.91376004571;
    msg.height = 0.702260536906;
    msg.services.assign("COCVBJCEWWXRVSZOKHKZPYCFOKNQSRFCPKDIQYJXVPTUDIZDZTNXRVBATQMYIGIZBRQFVLNAXKXDWXLQEIGSQJJLMOJDUAHRBEMUUOJQNGLVUNEASKGPXWYMHXGRKUUBNCKATYJGCITMRLOYPEWWABJLVZPBGWKRTADFHETMLODIDFIUYZZOHHVCGUDAHHEAHBPGOSTZSSFYTMQTWFNHFBEFMMPPWLINXAUZYMNIVRGJPSSVCEF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.321674714198);
    msg.setSource(42033U);
    msg.setSourceEntity(132U);
    msg.setDestination(49894U);
    msg.setDestinationEntity(45U);
    msg.sys_name.assign("GYZVPWBWHQLMFCPUJHSKTKMADZOEMWKKADJS");
    msg.sys_type = 237U;
    msg.owner = 57984U;
    msg.lat = 0.236197991906;
    msg.lon = 0.701389673052;
    msg.height = 0.3987138557;
    msg.services.assign("KYDDNMMGSSIUJGPHLPPQROVAUULNXQYBMLFBRVDTRFTTLOWJRQWMKCRBUVNINCXWUQJCLNMAUITQCQIGRRSNZDQHJNOIQWKBFNEIWIVFSSVYZTJEXXKFYAUOTRIBKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.78349229528);
    msg.setSource(25556U);
    msg.setSourceEntity(76U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(211U);
    msg.service.assign("JLRQRKTFTWUDIROYXCVBESBPSBVRACWFMCOBGHRCVZLOZ");
    msg.service_type = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.583034195756);
    msg.setSource(42469U);
    msg.setSourceEntity(222U);
    msg.setDestination(20558U);
    msg.setDestinationEntity(241U);
    msg.service.assign("HRLXGHFMSSFQXKNAUOTHKHUHWHNZOHCMITDGGMQAKVBIJXWDKNSJUOEADNPQYDQNYDCGZVTYFJEMEVNGDOVBKUFORSBZEJPJYPLCXZEGOMPUKFEXRUISVPGNCZCZDCURAXMRRFYYZOLVZWBUWPSWCAGNCDPZTQLIISCTBLBFURMGSHFQTQVTPAVFALSRXYRTILHMOFDMWNJVQPKOEYBEHIEGCXLJOWAEDAKT");
    msg.service_type = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.417326930378);
    msg.setSource(53613U);
    msg.setSourceEntity(244U);
    msg.setDestination(38268U);
    msg.setDestinationEntity(141U);
    msg.service.assign("UTRXEAWTFNSCPLOVEJJSBSFHQFMYBWUTDZUSCNQZEYGYWIDMUHYEXTRXZJAXTM");
    msg.service_type = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.298093985317);
    msg.setSource(41362U);
    msg.setSourceEntity(21U);
    msg.setDestination(21824U);
    msg.setDestinationEntity(125U);
    msg.value = 0.724471008731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.334174321186);
    msg.setSource(20726U);
    msg.setSourceEntity(8U);
    msg.setDestination(23715U);
    msg.setDestinationEntity(180U);
    msg.value = 0.347262591356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.821497825239);
    msg.setSource(17735U);
    msg.setSourceEntity(118U);
    msg.setDestination(368U);
    msg.setDestinationEntity(26U);
    msg.value = 0.613432096457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.940421950955);
    msg.setSource(41586U);
    msg.setSourceEntity(246U);
    msg.setDestination(31014U);
    msg.setDestinationEntity(8U);
    msg.value = 0.849789143043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.65958050574);
    msg.setSource(49069U);
    msg.setSourceEntity(31U);
    msg.setDestination(20312U);
    msg.setDestinationEntity(197U);
    msg.value = 0.776898877145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.522400998185);
    msg.setSource(46552U);
    msg.setSourceEntity(117U);
    msg.setDestination(2047U);
    msg.setDestinationEntity(13U);
    msg.value = 0.585132470928;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.0691791961312);
    msg.setSource(27293U);
    msg.setSourceEntity(239U);
    msg.setDestination(42761U);
    msg.setDestinationEntity(181U);
    msg.value = 0.329773444752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.226764780106);
    msg.setSource(27312U);
    msg.setSourceEntity(79U);
    msg.setDestination(55361U);
    msg.setDestinationEntity(194U);
    msg.value = 0.32646880254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.521510517856);
    msg.setSource(55249U);
    msg.setSourceEntity(100U);
    msg.setDestination(61333U);
    msg.setDestinationEntity(229U);
    msg.value = 0.846056600272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.971180708906);
    msg.setSource(15637U);
    msg.setSourceEntity(114U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(65U);
    msg.number.assign("ODLRSTYRWUYZ");
    msg.timeout = 22620U;
    msg.contents.assign("MNXBWPNRYSYTEBCQLVBJHCSIUUTCGYXXDADUCURTIZPNGADWREFTAUHCYZOKGXGKRFBNXDOCOPWGSPASJEVMCVLPXUNPMFJDNTRDIVTMZLWQSIMFTNOCXEKHGSOILBTQYEYAOHAWXPESKILPGBZSWRRXLWMTKZKFVBHUQZWUIJHHBCVJJFJOEBLWFBOQRHHQVZJUKUMNADHADYKGFMWXIEMRAYFRMGQZZZYLEKSPDGLJSEVQKTJNICQVFOVAYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.346611760039);
    msg.setSource(42648U);
    msg.setSourceEntity(163U);
    msg.setDestination(16715U);
    msg.setDestinationEntity(145U);
    msg.number.assign("HYLUQFQTPELTAXWEPDFVHSCGWHPXYLCTFIXVZSMZOIEKWUCEIMQZEXWPTEIETJVTJUDCGJARVGTVAHFIQKHLKBROOFAZMSAWNXICBAAYOHWXNERQPPVNMUJLNUKONWGHOZBKVDOXMLBYEVMKZGCXRMKXUKJBPHJSLUXYAPWYPRGSOYCOYZGYTDRDZGMWIZFRGQLDNSJBDNJVAQOVRFKTMDIZHBCRMJIUGBNQFUFSNLQBDLHYNTCUC");
    msg.timeout = 14985U;
    msg.contents.assign("UZGBTIQNXODZOEHZMFECQLEURACQPZKYNWRVRONPWCBYOF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.900704860746);
    msg.setSource(21084U);
    msg.setSourceEntity(114U);
    msg.setDestination(5231U);
    msg.setDestinationEntity(168U);
    msg.number.assign("ZQVFKETMNSDNWTKMNUBFOXAPFLQJDBZRCEWDHYCJULAPVZTXUXGWIJULQXYKOQYBQLBPV");
    msg.timeout = 12430U;
    msg.contents.assign("AIOGKEGLKSQLURXETJEAAESNLEQGAWJNNKTBFRBZYNNDXHOSPDGRYBCBETEYFXHZTMOBSBLPDFWQJZQFQKIDIDVXUANJYAPZRUWQHHALMWJBDZGKTLHXCWHIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.56150501621);
    msg.setSource(42574U);
    msg.setSourceEntity(88U);
    msg.setDestination(52916U);
    msg.setDestinationEntity(134U);
    msg.seq = 1098152067U;
    msg.destination.assign("USBESAQXETMNXFBULPKMRTCQFTKZHGEUNZMJTVBGDIRLZUKYVBESHIWPIRYNYAYHCHADTISVQBZWOQFWGLFDJCSOQYOLYPSPSVTMBEXGLCDXKDMLRKJUMDJFQDPISTEHBDRKWTPMZURGJVUJAOCTAFUDBMRVHYNXZYZJHEPAIAUGCOWNIEBMOLAXPLRXPWCWQKZWNGWNILPSDSO");
    msg.timeout = 59314U;
    const char tmp_msg_0[] = {111, -108, 85, 42, 76, 48, 19, 4, -32, -12, 79, 64, -116, 45, -99, 121, 95, 90, -117, 66, -94, -58, 38, 8, 72, -30, -4, 36, -53, -93, -120, 103, -66, 92, -111, 99, 28, -52, -123, -10, -110, 35, -92, 73, -12, -53, -34, 21, 44, 73, -59, 115, -16, -54, 79, 55, -50, 126, -95, 21, 85, -26, 5, -48, 13, 43, -113, 17, 89, -120, 94, -86, 89, -86, 40, 89, 36, 20, 33, 47, 6, 55, -52, 117, 107, 126, 12, -19, 92, -64, -115, 69, 52, -56, 55, -84, 93, 54, 81, 113, -17, -91, -16, 52, -50, 52, 59, 39, 117, 47, -81, 11, 89, 81, 78, -62, 2, -114, -34, 30, 9, -29, -25, 97, 125, -71, -72, 43, -11, -28, 39, 52, -16, 6, -68, 104, 3, -115, 17, -105, -23, 113, -126, -127, -77, 40, -63, 122, 38, -19, 98, -124, -35, 34, 40, -125, 84, 44, 38, -28, 48, -111, -2, 93, -27, 45, -48, -20, 99, 8, 0, -48, 44, 31, -55, 125, 110, 27, -60, -124, 86, -107, -123, 61, 55, 52, -17, 62, -122, -25, 41, -13, -127, 114, -33, 49, 24, 118, 59, 60, -48, -106, 25, 90, -81, 126, 64, -3, -90, -52, 3, 111, 111, -51, -10, -11, 107, -113, 29, 4, 114, 22, 31, 74, 9, 2, 85, -66, 40, -84, -80, 118, 69, 59, -5, 70, -13, 92, -101, 15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.152828166016);
    msg.setSource(3834U);
    msg.setSourceEntity(231U);
    msg.setDestination(46876U);
    msg.setDestinationEntity(185U);
    msg.seq = 1052629455U;
    msg.destination.assign("GERWNXOFFZRSDLNCRMNYKCDJZPEBQ");
    msg.timeout = 59883U;
    const char tmp_msg_0[] = {-23, -105, -59, 41, -96, -6, -125, 8, -62, 6, -80, -45, -53, 113, 23, -118, 101, 22, -32, -8, -8, -97, 125, -55, 57, 78, 104, 32, 77, -4, 50, -17, 76, -15, 11, -111, -25, 62, 47, 43, 5, 106, -97, -72, 22, 43, 47, -61, -61, -114, -103, -38, 83, 75, -102, 114, -83, -89, 79, 87, 123, -20, -78, -39, 107, 96, 55, -63, 56, -17, 50, 78, -64, 94, 95, -91, -70, -110, -20, -43, -38, -120, 0, -113, 102, -3, -35, 11, -106, 67, 27, 38, 57, 90, -49, -116, 7, 102, -78, -58, 59, 42, 86, -3, -56, 87, 94, -51, 25, -115, -127, 48, 24, -45, 102, 88, -116, 37, 99, -69, -48, 12, -5, -114, 123, 99, -56, -110, -75, 124, -7, -117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.231370616571);
    msg.setSource(2818U);
    msg.setSourceEntity(3U);
    msg.setDestination(9706U);
    msg.setDestinationEntity(188U);
    msg.seq = 320345406U;
    msg.destination.assign("NUUOSABJYCUHDTXUXDNKRVFRYTIPQSAMSQUDNZPZPBSGOJDVCJGGEBZLERRGDBVNHTMRKNFGVPCXGPKLOQWJLEMWRCWRGLKPLSELFFBKDEUZYCNHSKMAYHYCJLOBSUJGFHSEXSIKPQCAOVMTGDTRTNTCPYJFYMTIAQFBLMTVAHCQVHHPXZMHQZADXNFQWAOZEKHTXIQOYMIOV");
    msg.timeout = 40641U;
    const char tmp_msg_0[] = {65, 39, -62, -101, -55, 113, 113, -4, -25, 117, 13, -61, -82, 82, -5, 81, 38, -32, 26, 13, -124, 45, 95, -7, 118, -19, -35, 80, 19, -59, 111, -73, 22, -37, -115, 40, -63, -28, -122, 39, 11, 118, 38, 79, -97, 84, 107, 32, 96, 106, 88, 31, -38, 40, 64, -104, 32, 121, -16, 121, 52, -53, 62, 4, -65, -82, 84, -63, -88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.597641274413);
    msg.setSource(14388U);
    msg.setSourceEntity(147U);
    msg.setDestination(37464U);
    msg.setDestinationEntity(165U);
    msg.source.assign("WJYFJBUBJMXRTMONWXJERMJVENPYAJCFRKWMIRCAQVTPNWQOLAXNZRMFFXFGZCGOBLVQCGHRBKNAGSEHPYZGPQALMHBWGWDZLLQUJTZKZOYAARECNKHWB");
    const char tmp_msg_0[] = {-17, 123, 44, -2, -39, -42, 38, 3, 16, 26, 74, 122, -85, 126, 11, -65, -106, 53, 116, -76, -36, 10, 20, -87, -43, 25, -89, -64, -53, -24, 40, 22, 22, 115, -75, 5, 111, -64, -78, 33, -92, 81, 87, -85, -6, -20, -100, 107, 80, -46, 119, 108, -32, 23, -63, 71, 57, -114, -1, -122, -90, -94, 101, 12, 125, 0, 14, -21, 63, 100, 0, -4, 86, -128, -98, -117, 34, -64, 21, 31, -73, 119, -50, -91, -19, -3, -37, 51, 103, 2, -67, 100, -53, -96, 80, -111, -4, -58, -76, 101, -44, -20, 64, -69, -124, -35, -21, -39, -14, 95, 125, -119, 87, -72, -127, 49, -92, 48, -47, -70, 26, -51, 70, -64, 35, 21, -119, 41, -28, -43, -15, 101, 51, 93, 50, -12, 68, 68, 92, -114, 99, 73, 76, 20, 68, 98, -53, -127, -92, -49, 66, -54};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.301106225709);
    msg.setSource(27428U);
    msg.setSourceEntity(95U);
    msg.setDestination(47147U);
    msg.setDestinationEntity(223U);
    msg.source.assign("DBKRARREBOCUNVPZMCQUHOCWVSKYRKRVASSYBGILMXDOBGFYDLDWJNEFVAOZMEHQHKGEZVZFHOLSDNBTAAAUBWJLNTKGLUIXJTW");
    const char tmp_msg_0[] = {-11, 109, 25, -55, 59, 99, -14, -22, 40, -108, 116, 75, -26, -86, 53, 69, 120, 6, 78, 14, -38, 122, 72, 78, -111, -27, -43, -109, 39, 15, -16, -122, -25, -1, 6, -21, -23, -68, 82, -17, 93, 59, 82, -125, -3, 75, 70, -90, 43, -5, 76, -27, 96, -36, 2, -103, -117, 94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.50590572194);
    msg.setSource(9491U);
    msg.setSourceEntity(218U);
    msg.setDestination(20989U);
    msg.setDestinationEntity(15U);
    msg.source.assign("PUTRJYHIGKLRYEBLYVIACNRMASGERPEXEBXOAWHQPMJSSANQEORAFUVKSGTHCDZCBKLVIQCZYWJFZAIECQJJOVIOXWOJCGECLWVPSFYBFYUDHHNPOCZNZZBPVWFDAMMUFNDMDKKSBVGYJOOSHMILSUQTQBSNK");
    const char tmp_msg_0[] = {35, -26, 15, -6, 22, -53, 57, 120, -43, -75, 118, -17, -81, -87, 32, 107, -97, -123, 60, 87, 114, -87, -31, -37, -1, -63, 42, -49, 2, 44, 115, -48, 82, -29, -23, -60, 65, 30, -53, -94, -19, -83, 77, 37, 36, -82, -12, 81, -104, -103, -128, -18, -72, -60, -113, -77, -66, -42, -87, -10, -49, -5, 116, -43, -44, -17, 99, -80, -47, 42, -23, -126, -21, -20, 57, -127, -110, -20, 104, 20, -36, -91, -107, -78, 46, -109, -53, 65, -21, 81, -106, -69, 82, -102, -62, 25, 82, 48, -1, -39, 26, -123, -1, -19, 30, 102, -110, 48, 70, -93, 125, 103, 121, -97, 53, -2, -29, -110, 60, -9, 106, -66, 44, 101, 114, -85, -38, 119, -10, 51, 92, -53, -74, -26, 68, 65, 77, -13, 7, -40, -92, -80, 101, -127, -99, 121, 125, 25, 98, -39, 43, 91, 33, 77, -122, -27, -100, 87, 27, -122, -20, 66, 10, -79, 43, -114, 126, 117, 80, 26, -93, 17, 42, 37, 16, -62, -61};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.642792374693);
    msg.setSource(59940U);
    msg.setSourceEntity(103U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(238U);
    msg.seq = 2856451395U;
    msg.state = 156U;
    msg.error.assign("ELVPOHRVRKLQDRHUSIDVDMIDUZGVMMMFWWLACCMVQZSOHICTCWQWTAEXPIJOVBREWMNQCZUOAVOXPQYTDAIIZRUDEKYEBRBCNCDJFGHGZPPONVSWXMUFTPOBKYPFDBUPEYLLAFNJKQYMESRTXAZIGZYHOIGYFYHSWFQXNKSAXKZZXOEBQHYXLNGZKXHPPWAUTJKSJRMHFNBJJUCGNGFNRGYAOFJETGSWJLASBIICCBDUTTESMBLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.599828202168);
    msg.setSource(1478U);
    msg.setSourceEntity(93U);
    msg.setDestination(9580U);
    msg.setDestinationEntity(145U);
    msg.seq = 3394797026U;
    msg.state = 75U;
    msg.error.assign("DXEMCJGGASUZEHUHRROSZIVHXKPBRYSVQPIFPDACHIGLBDVDNKXTWZUCLTMRCTITQFIOQZJTFGBEMYJXJEBYJTGXOJBKZPJCHNHWCNHCWRBLZSWCMIYLNQFWHKEGPFMODJSYQGINUEVOVDLAAQFMUWTVVFNKVDYDUZOARIWKYRSLZFEVHBYXYUAOZXPUDJZNTAIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.10657677659);
    msg.setSource(43619U);
    msg.setSourceEntity(215U);
    msg.setDestination(43886U);
    msg.setDestinationEntity(241U);
    msg.seq = 1438076843U;
    msg.state = 179U;
    msg.error.assign("BXHDNUNGMNRDDSFXVOMJZFJVBLMPRRSTGVXZCKPXUNKZRKGSCBMTKQCXEDHGNSJXFXSQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.820167890315);
    msg.setSource(42944U);
    msg.setSourceEntity(129U);
    msg.setDestination(2481U);
    msg.setDestinationEntity(251U);
    msg.origin.assign("XOZPCUARKAQSGUXMKRIGCTNDTLUTECVZYWQYAFHCPOXQ");
    msg.text.assign("KKOMWXHVFKAQPHWNIZLSNRPHLCTFXQJRRESTCABSWYZGYIJVCYDSVOUAYHPSAESWDFMIOAJMHRVLTZKUELPZKOPYNVBXVLVDQYCJWIHFVUQXJBHUIEGBEKWXASLNGKNFQNCWHFBCEIZWDGVQMCILQKDXJGTCKOPNGWYUCAHGJDNEBAPIZLZYRPOXGTWOEIKDEXXUXEMGYTNFBUUSTZPBZHLBMFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.258739956892);
    msg.setSource(7268U);
    msg.setSourceEntity(14U);
    msg.setDestination(9359U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("JZQGDSPDQMTPPIGFBJDJ");
    msg.text.assign("RFIZVQMKVMAAOUZFMSOQNGEVRVTJFWHXATPATOHGYCXIMHIYLCLYRKQREBWWHEGBFPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.121250502552);
    msg.setSource(40846U);
    msg.setSourceEntity(97U);
    msg.setDestination(55335U);
    msg.setDestinationEntity(20U);
    msg.origin.assign("IVMORMBEKNP");
    msg.text.assign("CXWOBLRFCYWRBUSWWCMVBAZSQYDTJDEHRQUHXZHVXRPAXFRUIQIEGJGOKDNRSAGMYEUCDSFPESLHQIYULZKPNIBNSNBTGTAAGZYJEUBVEWVHKCJYFJPUZSNCILJDMKVPIYPGOLTCCKMQNCLMMTRWWZFVXMKLBODESKOOOZFKDTTI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.92208992891);
    msg.setSource(26900U);
    msg.setSourceEntity(131U);
    msg.setDestination(43107U);
    msg.setDestinationEntity(128U);
    msg.origin.assign("YSTILRTTYHAXMROIOWRXVTAZGOKKAZQZPAFBDCSUFMFOGGPRLPJQUEDNOLYJLHSZKVXJZQMQHVPTGTWKSEOBKNRGBIIPSQIZCAAOUUGHWQKNDMZHVQWXXU");
    msg.htime = 0.476075222367;
    msg.lat = 0.831478895546;
    msg.lon = 0.651500568388;
    const char tmp_msg_0[] = {101, -116, -60, -47, 24, -56, -111, -50, -69, -57, -104, -31, -103, -48, -42, -59, -104, -5, 111, 92, 105, -126, -41, 124, -22, 71, -13, -118, 38, 7, 51, -78, -20, 31, -86, 11, -104, 42, 84, -9, -79, 14, -37, -75, -124, 36, -32, 44, -7, 58, -3, 95, 80, 50, -107, -91, -24, 60, -105, 90, 80, 118, 60, -47, 57, 121, 22, -100, 50, 14, 39, 92, 24, 60, -38, 101, -52, 118, 77, -65, -113, -12, 0, 14, -123, -89, -36, 33, -3, -46, 39, 15, 90, -10, -87, -89, 33, -104, 44, 116, 95, -14, -77, -79, 58, -82, 86, 18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.796531003501);
    msg.setSource(7564U);
    msg.setSourceEntity(144U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(73U);
    msg.origin.assign("FBCBNAQRXYUPVUQIDIKYKVVBLECMVPNBHVZTSREFSOHFBCQOYUNUHYMIZUPKCEBUFLWAKVRCWKMZGGZMRRATDMKYDIZXGMKWGTIXQNJYCDWPAASFZPNEOEIYBQRLUAPYFHGQXENJZUOXHFKVLTRLDBEDALTQQFPSWJFWIOPEXQOTIJGSYXNA");
    msg.htime = 0.320251829969;
    msg.lat = 0.0344312429376;
    msg.lon = 0.434069074185;
    const char tmp_msg_0[] = {114, 8, 25, -65, -105, -33, 47, 8, -53, 56, 76, -100, 99, 44, -5, 84, -113, -58, -49, -35, -54, 33, -79, 52, 104, 63, 52, 15, -117, -115, -28, -104, -32, -4, 39, -115, 104, -54, -55, 33, -85, -21, 16, 104, -17, 4, -89, 98, 2, -33, -64, -42, -112, -69, -4, -61, 75, 53, -5, -60, -60, -2, -86, -7, 103, 27, -93, -82, 19, -18, 11, 96, -98, -48, -41, -72, 24, 59, 108, -61, 17, -54, -87, 124, -30, -36, -40, -121, 19, -90, -9, 57, -45, -8, -59, 53, -121, -98, -126, 14, 47, 70, -90, -75, -47, 47, -82, 56, 114, 71, -54, 81, -12, -15, 97, -109, 102, -2, -26, -42, -22, -16, -47, 55, -115, -43, 102, -54, 77, -27, 89, 40, -73, -61, -87, -128, 101, 90, -59, -6, -6, -123, 50, -89, 20, -98, -20, 93, 6, 64, 41, 8, -98, -127, -12, -118, -30, 27, 80, 61, 99, 14, 65, 84, -120, 94, -122, 10, -26, 36, 67, 68, 40, 15, 11, -43, -26, -58, 28, 82, 58, -96, -43, -10, -69, 33, 6, 21, -115};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.908545846562);
    msg.setSource(10120U);
    msg.setSourceEntity(249U);
    msg.setDestination(50629U);
    msg.setDestinationEntity(216U);
    msg.origin.assign("EPXANSHRKLBOKVCIWEZOQPZQZBESRJPHRGNIFWQQAFMGHWVYYXNHVIYCCCNHBISJMDYYNTIUNAZUBLPUBKJTKGOYLSPFGQEQNCPPPGWXWJDKG");
    msg.htime = 0.00754146926674;
    msg.lat = 0.485423075204;
    msg.lon = 0.356146126307;
    const char tmp_msg_0[] = {54, 72, 28, -86, 7, -99, 28, -115, 121, -72, 124, 27, 96, 83, 53, -8, -111, -110, 35, 88, 77, -27, -36, -71, 1, 48, -35, 92, 121, 8, -44, -54, -115, 58, -125, 11, -11, 55, 63, 79, -16, -48, -83, 59, -29, -71, -125, -86, -15, 20, 118, -6, -96, 103, 23, -66, 43, -106, 107, 59, -123, 20, 54, 30, -45, 55, 17, -2, 55, -64, 57, -80, 12, 41, 123, 70, 55, 112, -54, -9, -83, 28, -44, 53, 28, -116, -70, 69, -14, -115, -42, 95, 44, -74, -6, 95, 9, 92, 50, -126, 86, -100, 108, 84, -68, 41, -88, -66, 31, 52, 106, 63, 30, -10, 82, 6, -72, 80, 107, -28, 86, 16, 73, -116, 73, 17, -23, 50, 64, 0, -67, -14, 68, 109, 115, -100, 65, 8, -123, 72, -12, 80, 18, -36, 93, -32, 95, 41, 1, 55, 76, 85, 118, 125, -39, 17, -125, -107, -49, -37, -72, -30, -112, 46, 96, -19, 117, 60, 11, -29, -79, 100, 13, -2, 20, 17, -81, -123, 38, 19, 115, -51, -34, -78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.770658390665);
    msg.setSource(28943U);
    msg.setSourceEntity(105U);
    msg.setDestination(22274U);
    msg.setDestinationEntity(13U);
    msg.req_id = 8122U;
    msg.ttl = 60792U;
    msg.destination.assign("PHRPHZMIUMMQNXCSBHYSOYQQJOKPVEVDLWUWQTCHZZDUHSB");
    const char tmp_msg_0[] = {114, 6, -29, 125, -84, -93, 108, -2, -81, -31, -93, 64, 119, -5, -68, 51, 100, 30, -76, -97, 23, 78, -114, 91, -120, -92, 69, 86, -119, 123, -113, 7, -41, -57, 93, 13, -27, 22, -10, 114, 13, -66, 12, -99, 58, -35, -44, -85, -42, -34, 115, -121, -113, 62, 75, -125, 111, 78, -4, 55, 42, 71, 98, -2, 34, 53, 76, 92, 124, 11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.108864205654);
    msg.setSource(14318U);
    msg.setSourceEntity(112U);
    msg.setDestination(43015U);
    msg.setDestinationEntity(68U);
    msg.req_id = 54368U;
    msg.ttl = 63266U;
    msg.destination.assign("VQJTLRTLETEWMWSOEPUVIUBGAYXMRHWDDWWVHG");
    const char tmp_msg_0[] = {14, -92, -31, -84, -29, 103, 125, 73, 34, 93, -92, 9, 8, -55, 69, -19, -14, -118, 83, 67, 104, -96, -23, 49, -104, 26, 103, -71, -20, -52, -105, 95, 108, 97, -40, 28, -77, 76, -123, 100, 74, 19, 126, 13, -95, 83, -45, -51, -88, 8, -98, 21, -10, -110, -49, -109, 84, -15, -126, -106, 58, 112, -100, 125, -3, -37, -87, 101, 117, -83, 13, 99, 79, 93, -96, -97, 49, 99, 92, -62, 5, 43, -94, -18, 61, -29, -11, 29, 76, -83, 42, -105, 10, -51, -105, -33, 38, -24, -108, -63, -37, -87, 77, 27, -122, 38, -43, 59, -72, -83, 116, -19, 37, 67, -105, 83, -117, 23, 33, 17, 41, 73, -61, -12, -42, -46, -20, -59, -100, -78, 99, -72, 54, 88, -87, 13, 92, -29, 88, 54, -77, 51, 37, -62, 85, -81, -100, 66, -119, -7, -122, 62, -52, 75, -108, -90, -98, 82, -12, -46, 39, -12, 87, 85, 39, 35, 23, 46, 86, -79, -19, 92, -26, -81, 83, 98, -2, -118, -88, -93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.0783830473888);
    msg.setSource(33660U);
    msg.setSourceEntity(174U);
    msg.setDestination(48010U);
    msg.setDestinationEntity(175U);
    msg.req_id = 50253U;
    msg.ttl = 58892U;
    msg.destination.assign("ENLXZQGKRVPJBDQIMADEIYQYZNFLBLVIZUMJAYJGCQARBZBFOLPHYFPKXMZOEDWYNTEUCFABUQVVJNEQWDVVSYFNHTRGWWUYSFLJRZARBEYOXEJINDSCEKAFRW");
    const char tmp_msg_0[] = {18, -62, -12, 81, -41, 17, 101, 1, 108, -82, 93, -85, 99, -51, -128, 28, -38, 14, -91, 68, 68, 122, 12, 85, 77, 77, -24, -58, -41, 2, 103, 73, 107, -41, 71, -70, -17, 12, 5, -84, -122, -16, 71, -128, 113, 103, 24, 90, 44, -58, -72, 117, -7, 88, 109, 17, -24, -50, -38, -110, 56, -64, -89, 116, -100, 71, 85, 12, -5, -100, -21, 54, -87, 95, -51, 44, 78, -113, 109, 73, 119, -96, -52, -111, 92, -77, 31, 0, -4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.759662726135);
    msg.setSource(64067U);
    msg.setSourceEntity(240U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(250U);
    msg.req_id = 4547U;
    msg.status = 187U;
    msg.text.assign("GRTSYCKWNWJQBELJTGZGPWHSMLJOWNDNYNYDKFYVITNPNYPATLGQAWPQNAVVOKVDJXWKTNRZSFSOUEWGUBAVXAKJIKELLEDIDZLSGCRRRWIIVHMDHAULKNHOOUJPNHDHSKOPLBZDZGOZBAJVGRRLIKQRUQQVZMYPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.0362645937221);
    msg.setSource(3653U);
    msg.setSourceEntity(65U);
    msg.setDestination(30418U);
    msg.setDestinationEntity(114U);
    msg.req_id = 2919U;
    msg.status = 150U;
    msg.text.assign("NIFAZVSNOMNFOH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.00361398579364);
    msg.setSource(6683U);
    msg.setSourceEntity(177U);
    msg.setDestination(34903U);
    msg.setDestinationEntity(253U);
    msg.req_id = 1582U;
    msg.status = 240U;
    msg.text.assign("VVGOMRKBWZXPFNPUEQKRXHNYTXNIEMFZEWISHSDOJIHJVXNUUFFADVMPCLOMFWHLCLRVRBGTOCEEHHODKZJCKTTBCBWJWACIGQYVYMOCWPAEYISANZTZAMHJBYPPRKBXITZLMCZGARGFKQYUKDYOBVLNQVKSRYEASNYJQWZULDYFSRIKRSUSEQGQPLEOILMBWQTNIGMHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.683403381234);
    msg.setSource(13766U);
    msg.setSourceEntity(157U);
    msg.setDestination(62987U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("XGFGEOQVXXSWGUKARUCUFLPILVQFRNHDYAPCINGKKXKXNWHMZLEDBDGABTRGTFFPKCOMPUCIJPIBJEBAOFEWBWGTQEDAWTMILXOEIPXZTTBQBHUOMCHJFQTRUMNBMSQYSGYLQZTRUKJVC");
    msg.links = 1978780686U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.641170920086);
    msg.setSource(5338U);
    msg.setSourceEntity(4U);
    msg.setDestination(63918U);
    msg.setDestinationEntity(232U);
    msg.group_name.assign("OPVVTCUEJOJZKEHFNMTYNUIPSHYVMWAYDUVOBYXVHKSHQTSQWLQUDALEQFRRXFDUQCPFRNH");
    msg.links = 1604497492U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.759917899836);
    msg.setSource(5082U);
    msg.setSourceEntity(2U);
    msg.setDestination(37048U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("VLSUSNTYVCMTOTRHWHOVXNOUZVCLTWYSCEWSPFGLBNEBNTOZMBTXGOVFWPUQJDFYHEMPBNMAIDBKFCEHZQEWXHCGLOMGSXGAQRPPMDUJOLZEDHSGNRSHDOISKDCBKFHJTVSPYCRIJWARJYBEELRKYKZETKMTPBIZXNMIVUQTNSLPXFFYLGIFIWVDFYVZQJZOKADUXAKARJADKUNQNIQRULBVDWWJ");
    msg.links = 3194009932U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.197013076841);
    msg.setSource(11044U);
    msg.setSourceEntity(161U);
    msg.setDestination(52910U);
    msg.setDestinationEntity(142U);
    msg.groupname.assign("KRWYUIBGNDYSAHFVGWIAELKNQRUFRYOXBTOOXXHMLZZBYWVAPPVDRZRDKEHYGQCH");
    msg.action = 62U;
    msg.grouplist.assign("XTITADPNCCVAVISVYQSJHENMISJMDDLXFZULQBZTCOIVSQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.451375985);
    msg.setSource(30713U);
    msg.setSourceEntity(151U);
    msg.setDestination(36664U);
    msg.setDestinationEntity(226U);
    msg.groupname.assign("MROOXCWKVSXGRPDFPWHHJCXGULUMYCBFVLVMACWJZWRUMPPJVIZLI");
    msg.action = 26U;
    msg.grouplist.assign("JIFMCXNYOSNWKWRKYVESZLEVMJQSAKCWUCFZCQSOXYTGEAHJSNSZAJNFTUBEARFDEOKTZGIUMMOHLAJIMEIRCKRXNITBFMIXCPGNLWHIUNOXTBRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.240687839123);
    msg.setSource(62022U);
    msg.setSourceEntity(250U);
    msg.setDestination(17110U);
    msg.setDestinationEntity(225U);
    msg.groupname.assign("RKEAQJVGLFMMJWOKPOLSVDFJCOFINBNFMRSXGGDBWHZMTBDUELZQNMMGGMNHDKOFWATUGICHEPHJXOVLWUEOEAGTOQYVKJDIPYLKYIWEZRXNXLWIDAEBQIW");
    msg.action = 55U;
    msg.grouplist.assign("JDANTFQHUNWMRBEORGHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.319569380299);
    msg.setSource(16368U);
    msg.setSourceEntity(4U);
    msg.setDestination(43820U);
    msg.setDestinationEntity(85U);
    msg.id = 47U;
    msg.range = 0.833762500695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.0899918377766);
    msg.setSource(51629U);
    msg.setSourceEntity(132U);
    msg.setDestination(6439U);
    msg.setDestinationEntity(206U);
    msg.id = 59U;
    msg.range = 0.0438799066329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.827414411255);
    msg.setSource(62596U);
    msg.setSourceEntity(189U);
    msg.setDestination(42186U);
    msg.setDestinationEntity(204U);
    msg.id = 148U;
    msg.range = 0.526278211655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.766216354161);
    msg.setSource(22408U);
    msg.setSourceEntity(37U);
    msg.setDestination(52125U);
    msg.setDestinationEntity(17U);
    msg.beacon.assign("OECAZHAUXCXFOAKFJPBFYBTEODMVOAYRTVPJCQURRJHINYBMLJGZACRIYLWPDGQLSKESEMRYYFWCDBHPEBNLDHEJHDDMWWXTOLFLTXTRQRTUCIBKCINSJWRIVOSSMNPSZGMZHFEKUDEBNJGSMJZPGODBNYKIYYHBCRVXOOWHIVQWKAVTMAFXSNTKFAFLRMNQOZNXQKFXGZPQITTEVHMUKGBG");
    msg.lat = 0.610664774409;
    msg.lon = 0.239699586748;
    msg.depth = 0.854450033398;
    msg.query_channel = 90U;
    msg.reply_channel = 26U;
    msg.transponder_delay = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.804305440174);
    msg.setSource(16302U);
    msg.setSourceEntity(47U);
    msg.setDestination(59075U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("RKEHFDVQBRVMFIARMIAWDCZGAKHTOUXCNIWGACCJZOBTKTNPTPVUMLGYQCVJMZEDONUOGHSYLNGFHLZPSWDFFBNVJO");
    msg.lat = 0.302943038376;
    msg.lon = 0.81217439757;
    msg.depth = 0.297360728675;
    msg.query_channel = 181U;
    msg.reply_channel = 120U;
    msg.transponder_delay = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.719323265743);
    msg.setSource(33995U);
    msg.setSourceEntity(0U);
    msg.setDestination(2711U);
    msg.setDestinationEntity(182U);
    msg.beacon.assign("UFZQBOLXXIQHCTUAKCQVIXJIPCBUYDCXSVWNBEIZYOCKYYSUHZOREHGBGZMXNEYQFXDJBLABDDJDREODMYDIPWVQWQFVADTNOSHYVBZRWYEKOUTFLDZIJIGDKPOPPNWYMJKAGQXHRUOPAKNRVFNHJBZPZSSMETNLLSEGROZMFTJAKRMAPMBQHNOEJUSSPRVKWJVJTHHKQSEKLTC");
    msg.lat = 0.105069348001;
    msg.lon = 0.967531145388;
    msg.depth = 0.69821696206;
    msg.query_channel = 160U;
    msg.reply_channel = 80U;
    msg.transponder_delay = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.470803435625);
    msg.setSource(48473U);
    msg.setSourceEntity(236U);
    msg.setDestination(17599U);
    msg.setDestinationEntity(193U);
    msg.op = 84U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BVZELEWPIWGUJFIOYEVSYODRPXKQPGNRTZHQNDCUCTJCOFURWFBMUGGWFKNDXFJWLQPJATHXVGQWMEZBUXPKCHDHIQPMBKRSMDUHKOXZNKNSKODTAIHYEWKJWMOHBZDXUXOGAJKCRFCJPFTZVLAREYYNIRRDYWOGEXLZILPVCXNHXBVSGJASUMHABIDMFEJVIQEIVBTQAWSMBCLOHSCQMSKFZBQAZGNL");
    tmp_msg_0.lat = 0.607118326826;
    tmp_msg_0.lon = 0.251882612745;
    tmp_msg_0.depth = 0.0450442414117;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 102U;
    tmp_msg_0.transponder_delay = 64U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.443248173349);
    msg.setSource(34935U);
    msg.setSourceEntity(99U);
    msg.setDestination(41830U);
    msg.setDestinationEntity(188U);
    msg.op = 205U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KJCIIVMTZJOYUXDLTKWSPEIFYRCFSMFRVRGLJCVLHBXATANFPKWTHVAGMVWWBLNYNHYPZLUBZGCIWDXYQKGPVQUUQIRUHCJKWLLQMYFXVVBWGMIVBNDRQAPJGXXJYZKMNWZJOGIHGDJZQONMHAPMZUOAHEEHSOBCFTDTZXBAGKOKYRESBWWEDNFXTNGOZTY");
    tmp_msg_0.lat = 0.0446161091142;
    tmp_msg_0.lon = 0.893538015015;
    tmp_msg_0.depth = 0.0802158526605;
    tmp_msg_0.query_channel = 229U;
    tmp_msg_0.reply_channel = 137U;
    tmp_msg_0.transponder_delay = 107U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.200317371832);
    msg.setSource(16675U);
    msg.setSourceEntity(214U);
    msg.setDestination(25033U);
    msg.setDestinationEntity(137U);
    msg.op = 45U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EVAECSHPUMXGLOZXTACBTSEVMLQGBQJNRFUFJZVMLSHGFUQTIPJIVIAHZNUUPTSOCIRDEAQMBUYXYDLC");
    tmp_msg_0.lat = 0.628396811807;
    tmp_msg_0.lon = 0.769068202979;
    tmp_msg_0.depth = 0.578900224322;
    tmp_msg_0.query_channel = 207U;
    tmp_msg_0.reply_channel = 234U;
    tmp_msg_0.transponder_delay = 217U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0748617859607);
    msg.setSource(12517U);
    msg.setSourceEntity(30U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(183U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 19U;
    tmp_msg_0.list.assign("HBSPIUOYZSDWATZEBMZFUJTKPQGJYXQMQUXEDPLHDYMEFTNDWSEQQBXRRVGGVDWBBJZATSNSCWMYPEUCDUBLRGKJETDCIHNOQISCNXYJPIBMVRCFMRFARELQIFMOBEKYXVYHOWANVZLJZLCDUOKJKFOROHHDKPPLGQWTFHKQTVWLTWBMNLTGFMUGXXQZOGUZHASIIESYWNAPVXYJBPUGJALFNKVHPNZRMSNIJAOXCKVVGCAXILSEAFZKRTYO");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.440988640566);
    msg.setSource(42680U);
    msg.setSourceEntity(10U);
    msg.setDestination(63925U);
    msg.setDestinationEntity(98U);
    IMC::MsgList tmp_msg_0;
    IMC::MsgList tmp_tmp_msg_0_0;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.268699357427);
    msg.setSource(44205U);
    msg.setSourceEntity(30U);
    msg.setDestination(38826U);
    msg.setDestinationEntity(227U);
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {-12, 122, 47, -91, 123, 103, -121, 60, -65, -2, -78, 67, 102, 7, 33, -82, 72, -21, 117, 50, 48, -71, -45, -80, 69, -122, 15, -80, 63, 28, 74, 53, -57, 112, 67, 51, 71, -19, 78, -16, -125, 91, -23, -125, 5, -67, -96, -120, 61, -117, -91, -42, -75, -64, 122, -66, 91, 3, -124, 12, -118, -93, -64, 30, -18, 63, -84, 98, 106, 115, 48, 91, -46, -67, 106, 59, -67, 37, -105, 64, -69, -104, -3, 122, 2, -73, -97, 2, 54, 17, -41, -23, -112, 60, -125, -97, 24, 90, -107, -20, -109, 38, -24, -119, 31, 17, 55, 114, -26, -22, -106, 36, 11, 8, -93, -57, 85, 111, 47, 8, 39, -105, 95, -94, 14, -75, 65, -103, 78, 55, 5, -88, 44, -22, -96, 58, 36, 58, 54, -69, 21, -44, -69, 106, -11, 18, -88, 63, -46, -18, -38, 78, 107, -57, -50, -69, -5, -73, -93, -102, 40, -82, -104, -5, -81, 15, 118, -92, -26, -54, -29, 120, 1, 68, -31, -39, -118, -22, 92, -22, -2};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0614450097687);
    msg.setSource(29246U);
    msg.setSourceEntity(13U);
    msg.setDestination(16433U);
    msg.setDestinationEntity(100U);
    msg.op = 250U;
    msg.system.assign("XTTNPQYZQENHTZYYMVA");
    msg.range = 0.64029013028;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("MVQAYSXACPIWWTLKHDRQLMQDZAVGBOJYTWQROLZYEELSRFJHBTFLGWKLMUQEFQBKXQRBPRHITFMVMIKNYDDEBWJAJEIXEUIDNUOMZOEGKCJPDCXGXFJPRIMPSZTFWXVYHSLZKXHMVGCYVBBBMSLYUDRMSNFNKHRSRHHEVYCFNPJYTCTJHDAADIZAKVZZLKZIGCYJTTXPGNGLJUANOBAXQSNOPIXUVFOPDNKESWCFUHWAOCWR");
    tmp_msg_0.sys_dst.assign("CONKGMWBVINDCSPZKHJRGWBQKIJXNRWNMTZYWXMCXOJVRLGXOALYOPMXZBCVSRGPVMDIYFTNIAFFDHLAEBWKOZCUEWKKSEGESMGMNCYEFLSREZ");
    tmp_msg_0.flags = 123U;
    const char tmp_tmp_msg_0_0[] = {-98, 60, 65, 116, 107, 26, -78, -37, -43, -13, -19, -90, -124, 27, -82, 27, 119, -109, -85, 98, -26, -107, -9, 70, -47, 33, 35, -25, 14, 0, -26, 68, -76, 49, 32, -65, 73, -123, -33, -75, 87, -43, -82, -7, 101, 3, -75, -34, -72, -108, -25, -44, -59, 28, -94, -116, -108, -124, 13, 64, -106, -22, -67, -93, -92, -114, -117, -114, -126, -109, -45, -4, -121, -21, -51, 31, 106, -103, -8, 51, 13, -63, -20, 32, -89, 122, 100, -91, -100, -123, -53, -74, 51, -18, 114, 112, -31, 47, -86, 69, -44, 48, -102, -60, -43, 47, 38, 96, 35, 33, -38, -20, -81, 84, -53, -53, -38, 82, 40, -23, 11, 73, -75, -109, 74, 6, -52, 13, -117, -121, 65, 94, -30, 47, 94, 113, 38, -34, 81, -95, 83, 100, 79, -73, -33, -42, 38, 92, -77, 58, 83, -89, 53, -82, 56, 7, -111, 50, -9, -20, -38, 120, -71, -100, -41, -1, 36, -81, 9, 11, -56, 44, -26, 79, -99, -100, -94, -55, 110, 41, -33, -110, 20, 120, -15, 121, 94, -33, -56, 84, -4, 105, 116, 97, -19, -37, 6, 63, 71, 107, -104, 62, -43, 24, 80, -36, -12, 97, 60, 41, 105, 55, -64, -37, -20};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.372512130878);
    msg.setSource(9386U);
    msg.setSourceEntity(131U);
    msg.setDestination(50983U);
    msg.setDestinationEntity(12U);
    msg.op = 102U;
    msg.system.assign("IMAJYISUKEPHLVFMWNUYRCELPVXRQOVDOLOVSRGPIYZZOQJHTVWBTZHFRRWWBVHWUAPDIMPUXKQGMSNZNXHHELOYVGCNQYMSOJCEOTNVLQEANUTDHABCUNZWBXEQJJFFFXVBGPABIGOKTYCTZCOZPQLFEBHKAPDWPNKYTRWDSJBJGAMACFHBLKRCITZJSNXXWXKK");
    msg.range = 0.58792582658;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 154U;
    tmp_msg_0.range = 0.512392299347;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.371926079275);
    msg.setSource(61466U);
    msg.setSourceEntity(20U);
    msg.setDestination(53648U);
    msg.setDestinationEntity(43U);
    msg.op = 227U;
    msg.system.assign("XAWIWKDEPVWFTUPTRQLLCBNGQFJWZEJARPAIGFMTIFEXPWDZYYUFDUOQAKSGKDTEGBDHNFAEUVCZFOKCVSBNCZLHTPZCHNTZSXANNQLANVIHJXXTMBYJJRRSXJKXNPGBYUCVUCUMBGEAMRYNHKQTLGYWMLLKQSDOYSWROHHQYRBXUMIGRQLUWHPPZIIJNS");
    msg.range = 0.734708203273;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42372U;
    tmp_msg_0.off_x = 0.765434793495;
    tmp_msg_0.off_y = 0.20897170913;
    tmp_msg_0.off_z = 0.869070446435;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.0193676144664);
    msg.setSource(41136U);
    msg.setSourceEntity(75U);
    msg.setDestination(41242U);
    msg.setDestinationEntity(54U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.400171205158);
    msg.setSource(50208U);
    msg.setSourceEntity(162U);
    msg.setDestination(28866U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.772838849333);
    msg.setSource(47188U);
    msg.setSourceEntity(108U);
    msg.setDestination(30473U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.119121941837);
    msg.setSource(3556U);
    msg.setSourceEntity(91U);
    msg.setDestination(29593U);
    msg.setDestinationEntity(38U);
    msg.list.assign("FHUKWPXYGABVJWZIPTIBRLYULLNGSAQORLUNFCMBKCGNHQROCWISQRNEHJTTUBGVOJKUHYUMIDLIJREZCFPDQRANPYHZCOYJEWDEKKAEEXVRWXAFFMDKYXQXMMSYGCDCCSCZNSVFRQWNDJAIPHZLWVMLGUKXIDTGCOPJSJXIOXTTVPQTOUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.528933120773);
    msg.setSource(29237U);
    msg.setSourceEntity(155U);
    msg.setDestination(23849U);
    msg.setDestinationEntity(187U);
    msg.list.assign("HZOYMSBSICUXKXVDTFVOVDIEWJTMIJZWKQFAZPPWFBSRRGNDIBGXQCLCFEYIOIMHZPXBNLUOSMDIRGUKANHKQFZVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.183993648117);
    msg.setSource(38605U);
    msg.setSourceEntity(141U);
    msg.setDestination(42553U);
    msg.setDestinationEntity(74U);
    msg.list.assign("OOHNIHFZRDPWQUFCSWUSEPKPOJPLBHMUWYLCNEQAGKEBCHBQVIDXSLVKITZQJJMYZQCVTAMJCRUTNYNRNYSFGCUUBOLGJWDWHYAEJDCSVXFWGGVWTKUAKIVFAGZVQNEROYLLFFGPACVXDIAPPDSABPKTOONKZZFARGTITQOJSBMEXXXKDNMZAXJQUSIQXTRLHYTTEYKKLRBVXMUHZEGWZMJEMIBCOJRGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.165580249083);
    msg.setSource(12546U);
    msg.setSourceEntity(68U);
    msg.setDestination(15497U);
    msg.setDestinationEntity(216U);
    msg.value = 25106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.176365711187);
    msg.setSource(60986U);
    msg.setSourceEntity(104U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(135U);
    msg.value = -18166;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.206437274816);
    msg.setSource(32812U);
    msg.setSourceEntity(58U);
    msg.setDestination(55108U);
    msg.setDestinationEntity(160U);
    msg.value = -13820;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.636062638326);
    msg.setSource(15873U);
    msg.setSourceEntity(238U);
    msg.setDestination(58888U);
    msg.setDestinationEntity(32U);
    msg.value = 0.581865831561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.218102984802);
    msg.setSource(6384U);
    msg.setSourceEntity(200U);
    msg.setDestination(4866U);
    msg.setDestinationEntity(130U);
    msg.value = 0.363071775462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.463891394972);
    msg.setSource(54084U);
    msg.setSourceEntity(226U);
    msg.setDestination(61349U);
    msg.setDestinationEntity(204U);
    msg.value = 0.263421765981;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.123547859479);
    msg.setSource(54867U);
    msg.setSourceEntity(218U);
    msg.setDestination(62594U);
    msg.setDestinationEntity(29U);
    msg.value = 0.514800444962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.350955554706);
    msg.setSource(6232U);
    msg.setSourceEntity(247U);
    msg.setDestination(17690U);
    msg.setDestinationEntity(171U);
    msg.value = 0.999638106209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.636811472367);
    msg.setSource(40266U);
    msg.setSourceEntity(251U);
    msg.setDestination(21038U);
    msg.setDestinationEntity(20U);
    msg.value = 0.771828140241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.375162477573);
    msg.setSource(31550U);
    msg.setSourceEntity(63U);
    msg.setDestination(29175U);
    msg.setDestinationEntity(54U);
    msg.validity = 58411U;
    msg.type = 243U;
    msg.utc_year = 6054U;
    msg.utc_month = 62U;
    msg.utc_day = 120U;
    msg.utc_time = 0.0164788518933;
    msg.lat = 0.195554236388;
    msg.lon = 0.0217636693265;
    msg.height = 0.890566922009;
    msg.satellites = 203U;
    msg.cog = 0.799835122677;
    msg.sog = 0.154964075753;
    msg.hdop = 0.788640610298;
    msg.vdop = 0.447630419707;
    msg.hacc = 0.793484346486;
    msg.vacc = 0.831879713731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.585087543006);
    msg.setSource(56469U);
    msg.setSourceEntity(39U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(179U);
    msg.validity = 11275U;
    msg.type = 185U;
    msg.utc_year = 38195U;
    msg.utc_month = 132U;
    msg.utc_day = 180U;
    msg.utc_time = 0.463398960584;
    msg.lat = 0.577995594418;
    msg.lon = 0.776559925353;
    msg.height = 0.668798152201;
    msg.satellites = 88U;
    msg.cog = 0.131980051805;
    msg.sog = 0.280122984203;
    msg.hdop = 0.767534765397;
    msg.vdop = 0.997837035081;
    msg.hacc = 0.579772171222;
    msg.vacc = 0.834531432055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.285479134097);
    msg.setSource(44639U);
    msg.setSourceEntity(174U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(12U);
    msg.validity = 52470U;
    msg.type = 17U;
    msg.utc_year = 5916U;
    msg.utc_month = 245U;
    msg.utc_day = 170U;
    msg.utc_time = 0.103453135611;
    msg.lat = 0.5805871889;
    msg.lon = 0.73303512189;
    msg.height = 0.369090639493;
    msg.satellites = 143U;
    msg.cog = 0.557829512835;
    msg.sog = 0.771689748263;
    msg.hdop = 0.595946737376;
    msg.vdop = 0.40208274559;
    msg.hacc = 0.282259475674;
    msg.vacc = 0.353891378363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.747775263723);
    msg.setSource(27011U);
    msg.setSourceEntity(3U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(107U);
    msg.time = 0.283649574755;
    msg.phi = 0.904504198253;
    msg.theta = 0.28533907712;
    msg.psi = 0.0470263390297;
    msg.psi_magnetic = 0.33442424006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.682311732887);
    msg.setSource(16525U);
    msg.setSourceEntity(238U);
    msg.setDestination(31934U);
    msg.setDestinationEntity(14U);
    msg.time = 0.642931141591;
    msg.phi = 0.130307011976;
    msg.theta = 0.651607554746;
    msg.psi = 0.192257434342;
    msg.psi_magnetic = 0.491250088207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.825410096757);
    msg.setSource(751U);
    msg.setSourceEntity(179U);
    msg.setDestination(61030U);
    msg.setDestinationEntity(50U);
    msg.time = 0.813612664473;
    msg.phi = 0.0841211816876;
    msg.theta = 0.305117825208;
    msg.psi = 0.320152048334;
    msg.psi_magnetic = 0.353787387292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.320518570964);
    msg.setSource(61502U);
    msg.setSourceEntity(62U);
    msg.setDestination(3887U);
    msg.setDestinationEntity(253U);
    msg.time = 0.721451787772;
    msg.x = 0.995689346966;
    msg.y = 0.436073085477;
    msg.z = 0.906270129653;
    msg.timestep = 0.948452515875;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.308689233264);
    msg.setSource(52417U);
    msg.setSourceEntity(186U);
    msg.setDestination(4314U);
    msg.setDestinationEntity(41U);
    msg.time = 0.119112828996;
    msg.x = 0.184441432175;
    msg.y = 0.483320544494;
    msg.z = 0.662177086578;
    msg.timestep = 0.634027396532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0698016875121);
    msg.setSource(62132U);
    msg.setSourceEntity(184U);
    msg.setDestination(21387U);
    msg.setDestinationEntity(149U);
    msg.time = 0.18826967361;
    msg.x = 0.645125312195;
    msg.y = 0.193325094445;
    msg.z = 0.834561976108;
    msg.timestep = 0.256153014252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.0509563326487);
    msg.setSource(9071U);
    msg.setSourceEntity(105U);
    msg.setDestination(37433U);
    msg.setDestinationEntity(181U);
    msg.time = 0.185191870585;
    msg.x = 0.720347084314;
    msg.y = 0.333327126372;
    msg.z = 0.491912548562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.0714018399696);
    msg.setSource(5207U);
    msg.setSourceEntity(56U);
    msg.setDestination(59898U);
    msg.setDestinationEntity(185U);
    msg.time = 0.980813597885;
    msg.x = 0.1587553562;
    msg.y = 0.230590767078;
    msg.z = 0.324821786389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.791791415204);
    msg.setSource(16948U);
    msg.setSourceEntity(144U);
    msg.setDestination(39445U);
    msg.setDestinationEntity(214U);
    msg.time = 0.956964152617;
    msg.x = 0.443971670079;
    msg.y = 0.712274987086;
    msg.z = 0.140753949533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.0722642008715);
    msg.setSource(27189U);
    msg.setSourceEntity(226U);
    msg.setDestination(51520U);
    msg.setDestinationEntity(163U);
    msg.time = 0.13160361895;
    msg.x = 0.997478564107;
    msg.y = 0.192451582633;
    msg.z = 0.291156837128;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.705325564907);
    msg.setSource(37452U);
    msg.setSourceEntity(169U);
    msg.setDestination(28617U);
    msg.setDestinationEntity(49U);
    msg.time = 0.550860765521;
    msg.x = 0.259258153701;
    msg.y = 0.717740917521;
    msg.z = 0.471682109628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.997121270583);
    msg.setSource(43230U);
    msg.setSourceEntity(16U);
    msg.setDestination(21532U);
    msg.setDestinationEntity(8U);
    msg.time = 0.308088265638;
    msg.x = 0.313337200846;
    msg.y = 0.900637292867;
    msg.z = 0.127611804713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.338508831642);
    msg.setSource(10268U);
    msg.setSourceEntity(253U);
    msg.setDestination(45489U);
    msg.setDestinationEntity(208U);
    msg.time = 0.550905848285;
    msg.x = 0.117740104271;
    msg.y = 0.433246329783;
    msg.z = 0.926307726306;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.319992604132);
    msg.setSource(1982U);
    msg.setSourceEntity(181U);
    msg.setDestination(30768U);
    msg.setDestinationEntity(168U);
    msg.time = 0.332797683782;
    msg.x = 0.117735704847;
    msg.y = 0.416945274688;
    msg.z = 0.871861007724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.795752306206);
    msg.setSource(64706U);
    msg.setSourceEntity(21U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(7U);
    msg.time = 0.309574929682;
    msg.x = 0.712324300748;
    msg.y = 0.611424773448;
    msg.z = 0.660014407048;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.758840230748);
    msg.setSource(38617U);
    msg.setSourceEntity(196U);
    msg.setDestination(21612U);
    msg.setDestinationEntity(176U);
    msg.validity = 83U;
    msg.x = 0.786495322915;
    msg.y = 0.587785717123;
    msg.z = 0.595151041989;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.126460760926);
    msg.setSource(2814U);
    msg.setSourceEntity(86U);
    msg.setDestination(51279U);
    msg.setDestinationEntity(159U);
    msg.validity = 27U;
    msg.x = 0.943664356932;
    msg.y = 0.359481946097;
    msg.z = 0.205123359604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.930533707276);
    msg.setSource(27185U);
    msg.setSourceEntity(127U);
    msg.setDestination(11058U);
    msg.setDestinationEntity(78U);
    msg.validity = 122U;
    msg.x = 0.827559912492;
    msg.y = 0.554067542987;
    msg.z = 0.736885376287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.00302098001186);
    msg.setSource(62707U);
    msg.setSourceEntity(56U);
    msg.setDestination(10893U);
    msg.setDestinationEntity(160U);
    msg.validity = 112U;
    msg.x = 0.895908234394;
    msg.y = 0.169099373504;
    msg.z = 0.777810097594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.88590948316);
    msg.setSource(50887U);
    msg.setSourceEntity(24U);
    msg.setDestination(48251U);
    msg.setDestinationEntity(99U);
    msg.validity = 187U;
    msg.x = 0.584444248927;
    msg.y = 0.468387305921;
    msg.z = 0.580582959964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.373073531598);
    msg.setSource(34791U);
    msg.setSourceEntity(60U);
    msg.setDestination(22182U);
    msg.setDestinationEntity(103U);
    msg.validity = 116U;
    msg.x = 0.262767354895;
    msg.y = 0.18274295949;
    msg.z = 0.0917149528539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.0138218786245);
    msg.setSource(11217U);
    msg.setSourceEntity(221U);
    msg.setDestination(54646U);
    msg.setDestinationEntity(200U);
    msg.time = 0.846620405328;
    msg.x = 0.831358980672;
    msg.y = 0.579881946689;
    msg.z = 0.322692938398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.544378477929);
    msg.setSource(29747U);
    msg.setSourceEntity(106U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(41U);
    msg.time = 0.145311775541;
    msg.x = 0.074510635352;
    msg.y = 0.132726607611;
    msg.z = 0.952622758152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.828327288634);
    msg.setSource(13683U);
    msg.setSourceEntity(35U);
    msg.setDestination(7270U);
    msg.setDestinationEntity(196U);
    msg.time = 0.548481689252;
    msg.x = 0.908727933887;
    msg.y = 0.806349917969;
    msg.z = 0.286065017046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.456190145832);
    msg.setSource(41765U);
    msg.setSourceEntity(91U);
    msg.setDestination(27664U);
    msg.setDestinationEntity(181U);
    msg.validity = 229U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.413678168849;
    tmp_msg_0.y = 0.794989083746;
    tmp_msg_0.z = 0.12209999186;
    tmp_msg_0.phi = 0.838702057709;
    tmp_msg_0.theta = 0.711863913673;
    tmp_msg_0.psi = 0.973964329598;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.686945921717;
    tmp_msg_1.beam_height = 0.607375245721;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.765562420328;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.660240981121);
    msg.setSource(61993U);
    msg.setSourceEntity(196U);
    msg.setDestination(47477U);
    msg.setDestinationEntity(43U);
    msg.validity = 71U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0888865109111;
    tmp_msg_0.y = 0.457967850017;
    tmp_msg_0.z = 0.101814391692;
    tmp_msg_0.phi = 0.643027825762;
    tmp_msg_0.theta = 0.414970726615;
    tmp_msg_0.psi = 0.232616739762;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.798041687908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.800390357969);
    msg.setSource(3909U);
    msg.setSourceEntity(169U);
    msg.setDestination(47919U);
    msg.setDestinationEntity(238U);
    msg.validity = 225U;
    msg.value = 0.497651667801;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.0544879026652);
    msg.setSource(62743U);
    msg.setSourceEntity(166U);
    msg.setDestination(49989U);
    msg.setDestinationEntity(78U);
    msg.value = 0.252802594382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.364119692991);
    msg.setSource(8881U);
    msg.setSourceEntity(208U);
    msg.setDestination(4998U);
    msg.setDestinationEntity(47U);
    msg.value = 0.549807201041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.85886240246);
    msg.setSource(9945U);
    msg.setSourceEntity(12U);
    msg.setDestination(55148U);
    msg.setDestinationEntity(166U);
    msg.value = 0.0168174671266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.0794283282114);
    msg.setSource(38230U);
    msg.setSourceEntity(133U);
    msg.setDestination(33913U);
    msg.setDestinationEntity(11U);
    msg.value = 0.863371442187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.368872844829);
    msg.setSource(31506U);
    msg.setSourceEntity(38U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(221U);
    msg.value = 0.423179440025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.129921235449);
    msg.setSource(5881U);
    msg.setSourceEntity(230U);
    msg.setDestination(41538U);
    msg.setDestinationEntity(46U);
    msg.value = 0.938462561798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.337225781598);
    msg.setSource(39861U);
    msg.setSourceEntity(60U);
    msg.setDestination(46946U);
    msg.setDestinationEntity(90U);
    msg.value = 0.846042132471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.915892829461);
    msg.setSource(48966U);
    msg.setSourceEntity(186U);
    msg.setDestination(43240U);
    msg.setDestinationEntity(4U);
    msg.value = 0.550527650052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.963962654682);
    msg.setSource(1629U);
    msg.setSourceEntity(164U);
    msg.setDestination(4172U);
    msg.setDestinationEntity(156U);
    msg.value = 0.653678597438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.51771160231);
    msg.setSource(49189U);
    msg.setSourceEntity(83U);
    msg.setDestination(8609U);
    msg.setDestinationEntity(58U);
    msg.value = 0.108273186993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.753150643452);
    msg.setSource(35635U);
    msg.setSourceEntity(218U);
    msg.setDestination(48456U);
    msg.setDestinationEntity(219U);
    msg.value = 0.327146120673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.84058973939);
    msg.setSource(2156U);
    msg.setSourceEntity(69U);
    msg.setDestination(17932U);
    msg.setDestinationEntity(49U);
    msg.value = 0.982386060086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.585296090761);
    msg.setSource(11582U);
    msg.setSourceEntity(72U);
    msg.setDestination(48695U);
    msg.setDestinationEntity(18U);
    msg.value = 0.923402695651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.328646081692);
    msg.setSource(25249U);
    msg.setSourceEntity(92U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(19U);
    msg.value = 0.697052127026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.1237060299);
    msg.setSource(46012U);
    msg.setSourceEntity(183U);
    msg.setDestination(23730U);
    msg.setDestinationEntity(211U);
    msg.value = 0.919885920282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.535582664848);
    msg.setSource(56428U);
    msg.setSourceEntity(170U);
    msg.setDestination(20662U);
    msg.setDestinationEntity(163U);
    msg.value = 0.16889478629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.839579982189);
    msg.setSource(13165U);
    msg.setSourceEntity(214U);
    msg.setDestination(11212U);
    msg.setDestinationEntity(66U);
    msg.value = 0.951887717661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.911407339012);
    msg.setSource(21462U);
    msg.setSourceEntity(61U);
    msg.setDestination(24412U);
    msg.setDestinationEntity(161U);
    msg.value = 0.407782133047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.679410084798);
    msg.setSource(50980U);
    msg.setSourceEntity(172U);
    msg.setDestination(39022U);
    msg.setDestinationEntity(4U);
    msg.value = 0.416061882392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.0245316594466);
    msg.setSource(64958U);
    msg.setSourceEntity(27U);
    msg.setDestination(54801U);
    msg.setDestinationEntity(102U);
    msg.value = 0.926680574123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.433101377394);
    msg.setSource(59773U);
    msg.setSourceEntity(169U);
    msg.setDestination(10103U);
    msg.setDestinationEntity(148U);
    msg.value = 0.186666369002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.917315997856);
    msg.setSource(48252U);
    msg.setSourceEntity(176U);
    msg.setDestination(32349U);
    msg.setDestinationEntity(156U);
    msg.value = 0.874760646908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.591114213492);
    msg.setSource(23757U);
    msg.setSourceEntity(127U);
    msg.setDestination(13082U);
    msg.setDestinationEntity(34U);
    msg.value = 0.932342752096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.982774575384);
    msg.setSource(48562U);
    msg.setSourceEntity(130U);
    msg.setDestination(2383U);
    msg.setDestinationEntity(41U);
    msg.value = 0.0917821950831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.872499153433);
    msg.setSource(56327U);
    msg.setSourceEntity(4U);
    msg.setDestination(58660U);
    msg.setDestinationEntity(22U);
    msg.direction = 0.933642855962;
    msg.speed = 0.861864154729;
    msg.turbulence = 0.596934619206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.797858976498);
    msg.setSource(51436U);
    msg.setSourceEntity(139U);
    msg.setDestination(51898U);
    msg.setDestinationEntity(109U);
    msg.direction = 0.57069993061;
    msg.speed = 0.77958273455;
    msg.turbulence = 0.369028563678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.119165288851);
    msg.setSource(15130U);
    msg.setSourceEntity(87U);
    msg.setDestination(49984U);
    msg.setDestinationEntity(117U);
    msg.direction = 0.651038633232;
    msg.speed = 0.616056741466;
    msg.turbulence = 0.670082874313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.138574872635);
    msg.setSource(60138U);
    msg.setSourceEntity(68U);
    msg.setDestination(31023U);
    msg.setDestinationEntity(172U);
    msg.value = 0.872620563028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.0479014346539);
    msg.setSource(31480U);
    msg.setSourceEntity(238U);
    msg.setDestination(23805U);
    msg.setDestinationEntity(169U);
    msg.value = 0.922963368256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.302808591559);
    msg.setSource(48882U);
    msg.setSourceEntity(238U);
    msg.setDestination(8039U);
    msg.setDestinationEntity(138U);
    msg.value = 0.277278265837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.482005367831);
    msg.setSource(65381U);
    msg.setSourceEntity(145U);
    msg.setDestination(61040U);
    msg.setDestinationEntity(100U);
    msg.value.assign("JWKKOFCMSVQOYGPWIVRKRIVYGRTJNQEVSMHYXACLUTZHRCEFNZHMCGRLXUNDFJMOZOCXJWFIZBIZXQJNKLUQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.913590601801);
    msg.setSource(64734U);
    msg.setSourceEntity(69U);
    msg.setDestination(24764U);
    msg.setDestinationEntity(189U);
    msg.value.assign("XNGSIDDAQYDQMWSJMOWTOAACDNBRAPPUERTFLOQLZNSJKEAJXZWAPGBWIVIUHRZNVDGEIOOLWEVCBKMQGRJSTZJQFKMCBSANSIKOLBZHYKOLLXGRPGCXZPXHQYJCUCTJOFPFPWWTTABFMBEZZINBDYRFFMVLHUEXRVSYJVMTYHKZKGVMUMIHCRUIUXIGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.178189510017);
    msg.setSource(43949U);
    msg.setSourceEntity(33U);
    msg.setDestination(60038U);
    msg.setDestinationEntity(238U);
    msg.value.assign("RFJUGBRVDVAUYZFGSCNBYXIHGPOJBHZYZQZXVMYWIXSCYAXDQJXUJZAEEQXEAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.195797587594);
    msg.setSource(41378U);
    msg.setSourceEntity(54U);
    msg.setDestination(9423U);
    msg.setDestinationEntity(222U);
    const char tmp_msg_0[] = {98, 71, -96, -49, -51, 121, -82, 55, -2, -126};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.206987674329);
    msg.setSource(1477U);
    msg.setSourceEntity(143U);
    msg.setDestination(361U);
    msg.setDestinationEntity(112U);
    const char tmp_msg_0[] = {-58, 90, -105, 71, 81, -74, -21, 96, 80, 56, 63, 80, -1, -108, -75, 54, 58, -45, -117, 40, 81, -20, -62, 116, -56, -91, 116, -123, 71, -27, -88, 47, -97, -67, 25, -93, 90, 47, -35, -83, -45, 11, 2, -8, -73, -27, 21, 88, -111, 19, -49, 14, 0, 122, 24, -92, 81, -104, -41, -13, -67, 18, -55, 83, 114, -23, -126, -83, 74};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.138791519782);
    msg.setSource(14510U);
    msg.setSourceEntity(245U);
    msg.setDestination(28590U);
    msg.setDestinationEntity(234U);
    const char tmp_msg_0[] = {122, -27, 39, -2, -8, 1, -69, -11, -42, 83, -79, 114, -54, -113, 113, -15, 101, -120, -54, 46, 10, -13, -26, -21, -123, -3, -110, 117, 126, 101, 53, 95, -85, 53, 24, 52, 21, -114, 40, 110, -66, -76, 9, 68, 123, 69, -99, -125, 99, 19, 48, -41, -24, 69, -64, 61, -13, -17, 39, -109, 50, 105, -123, 77, -57, -43, 15, -100, 42, -98, 104, 22, 93, -128, -107, -58, 29, 2, 9, 90, 74, -51, 45, 26, 64, -68, -70, 92, -27, -117, 106, 51, 2, 79, -10, -94, -52, 17, 123, -75, -64, -61, 84, 99, -69, -24, -38, -24, -8, 55, -95, -63, 34, -96, 46, -97, 97, -31, -81, 125, 54, 125, 82, 83, 76, -50, -124, -18, -116, -92, 55, -87, -106, -9, 98, 90, 27, -1, 97, 57, 75, -12, 61, 39, -111, -44, 3, 87, -97, 46, 3, -57, -91, 64, 31, 96, -44, -1, -93, 91, -47, 51, -22, 29, 105, -108, -18, 0, 42, 44, 115, 115, 32, -122, -48, -95, -103, -15, 107, 111, -37, -123, -41, 30, -91, -59, -17, 109, -121, 53, -49, 101, -96, -109, -71, 125, 116, 61, 108, 92, 118, 14, -20, 55, -52, -112, 95, 113, -99, 121, -90, 63, -111, 37, 85, -49, 54, 4, 48, 107, -117, -111, 120, 21, 4, -28, 5, 65, 89, -108, 14, 76, 13, 96, -125, -80, -91, 88, -35, 2, 69, -72, -67, 92, -3, -90, 19, -39, 66, 20, 69, -106, 84, 125};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.332744975759);
    msg.setSource(22664U);
    msg.setSourceEntity(42U);
    msg.setDestination(60903U);
    msg.setDestinationEntity(116U);
    msg.type = 16U;
    msg.frequency = 1727491995U;
    msg.min_range = 24714U;
    msg.max_range = 43465U;
    msg.bits_per_point = 251U;
    msg.scale_factor = 0.257724589364;
    const char tmp_msg_0[] = {71, 110, 60, 117, 96, -117, 22, 25, 17, 8, -122, 100, -6, -10, 58, 43, -77, 36, -17, -25, 56, 110, 68, -60, 71, -6, 27, -67, 64, -106, -124, 57, 70, 73, 91, 34, -107, -119, -106, 30, 120, -10, 57, 90, 43, 39, -26, 19, -26, 0, -37, 111, 68, -120, 51, 17, -17, 8, -82, -108, 60, 10, -100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.785296519013);
    msg.setSource(29214U);
    msg.setSourceEntity(193U);
    msg.setDestination(54682U);
    msg.setDestinationEntity(131U);
    msg.type = 160U;
    msg.frequency = 306561573U;
    msg.min_range = 26117U;
    msg.max_range = 23377U;
    msg.bits_per_point = 52U;
    msg.scale_factor = 0.971324331563;
    const char tmp_msg_0[] = {58, 1, -82, -90, 110, -21, 126, -75, -80, -35, -28, -23, 124, -120, -125, 88, -59, 67, -28, -8, 92, -3, -120, -66, -52, -44, 98, 41, 101, -84, 35, -40, -122, 49, 60, 97, 8, 42, -1, 98, -103, -89, 123, -122, 115, -75, 57, -86, -1, -13, 19, 106, -42, -100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.876690601717);
    msg.setSource(61198U);
    msg.setSourceEntity(172U);
    msg.setDestination(11706U);
    msg.setDestinationEntity(28U);
    msg.type = 105U;
    msg.frequency = 3585506187U;
    msg.min_range = 785U;
    msg.max_range = 4828U;
    msg.bits_per_point = 45U;
    msg.scale_factor = 0.939595505293;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.353417425996;
    tmp_msg_0.beam_height = 0.682722534831;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {105, 27, -65, -65, 90, 0, 53, -18, 18, 62, -62, -37, 72, -23, -98, 4, 41, -57, -101, 119, -23, 31, 83, -114, -29, 45, 71, 76};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.912622949442);
    msg.setSource(13192U);
    msg.setSourceEntity(123U);
    msg.setDestination(58401U);
    msg.setDestinationEntity(30U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.575115122713);
    msg.setSource(19839U);
    msg.setSourceEntity(223U);
    msg.setDestination(21234U);
    msg.setDestinationEntity(67U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.921696074603);
    msg.setSource(18997U);
    msg.setSourceEntity(118U);
    msg.setDestination(57680U);
    msg.setDestinationEntity(214U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.263818190624);
    msg.setSource(1131U);
    msg.setSourceEntity(77U);
    msg.setDestination(27463U);
    msg.setDestinationEntity(161U);
    msg.op = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.027908142234);
    msg.setSource(19466U);
    msg.setSourceEntity(185U);
    msg.setDestination(58481U);
    msg.setDestinationEntity(194U);
    msg.op = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.89217037552);
    msg.setSource(36901U);
    msg.setSourceEntity(247U);
    msg.setDestination(56906U);
    msg.setDestinationEntity(99U);
    msg.op = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.0357955375871);
    msg.setSource(59124U);
    msg.setSourceEntity(167U);
    msg.setDestination(57410U);
    msg.setDestinationEntity(9U);
    msg.value = 0.113774159686;
    msg.confidence = 0.883947954874;
    msg.opmodes.assign("KPRUNGVICLOUIIFFWZOGQEZSMZDCJBHZXAZGNDHQWAAGTPVVJXMJSQXPABTBJCYSWSKZEQODKBNAPQVVNLEIXXGEKCDZPVJWSMIXUAFOQYHFJUKEHCOGUUZHNRFRARBWHLILLGTERUSBOQMKSTDUJPAYJDOMOSBDAQEKPMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.209669317583);
    msg.setSource(37394U);
    msg.setSourceEntity(43U);
    msg.setDestination(55443U);
    msg.setDestinationEntity(45U);
    msg.value = 0.128223552299;
    msg.confidence = 0.772088713316;
    msg.opmodes.assign("ZVBHXANMGNUALIYGHSAFMKQASGMLJEJEYXDVADGHZRNLCYRCUZOLSOBRDEMHHFNXMIQTUQQMTPUMCNEJKAUPDDFGERJVWCYIBPJEYUBOFGQNFXQITBZKNAVHTDZTYVVEIXLKIQJBCWZAXYIAPWFJPGYBDIHSLUWCLZFMXXUPGSKXILEAYQZCFNOESLWTPVTRKOSRFCOKMHTDUQPWJKNRLRWWZCDYOXVJWTRUCSBPBHMPQORJZWNVGEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.97463220028);
    msg.setSource(37700U);
    msg.setSourceEntity(243U);
    msg.setDestination(45118U);
    msg.setDestinationEntity(98U);
    msg.value = 0.139934837434;
    msg.confidence = 0.303963343142;
    msg.opmodes.assign("PUPHCSRVWQLGLEUXFEHRWQWNXVNDMJXVYJEAPDMVVXTDTEFJLAYKLOIZDRLPWDEMNQGQUQRPIJDVCKHQGCYCEJHNYSHDJGURIESOOZBTLFBZTULGAISHGTBNAZYXAIMXFZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.427246376719);
    msg.setSource(23161U);
    msg.setSourceEntity(16U);
    msg.setDestination(26514U);
    msg.setDestinationEntity(78U);
    msg.itow = 2273731658U;
    msg.lat = 0.636134627505;
    msg.lon = 0.722775153871;
    msg.height_ell = 0.983209027593;
    msg.height_sea = 0.857067707367;
    msg.hacc = 0.398199374445;
    msg.vacc = 0.527631497337;
    msg.vel_n = 0.851124423442;
    msg.vel_e = 0.979873700802;
    msg.vel_d = 0.503143617469;
    msg.speed = 0.993212780835;
    msg.gspeed = 0.841883881656;
    msg.heading = 0.374090620745;
    msg.sacc = 0.888556295993;
    msg.cacc = 0.176791613768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.990429493749);
    msg.setSource(23201U);
    msg.setSourceEntity(152U);
    msg.setDestination(38974U);
    msg.setDestinationEntity(23U);
    msg.itow = 2879191075U;
    msg.lat = 0.935349466789;
    msg.lon = 0.890641469374;
    msg.height_ell = 0.668138724842;
    msg.height_sea = 0.917390982433;
    msg.hacc = 0.104642837628;
    msg.vacc = 0.435656901276;
    msg.vel_n = 0.0782786163312;
    msg.vel_e = 0.202505964281;
    msg.vel_d = 0.561052340105;
    msg.speed = 0.298874313107;
    msg.gspeed = 0.257070191906;
    msg.heading = 0.750011374286;
    msg.sacc = 0.813785091598;
    msg.cacc = 0.0718295610357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.731014556216);
    msg.setSource(61837U);
    msg.setSourceEntity(226U);
    msg.setDestination(15157U);
    msg.setDestinationEntity(210U);
    msg.itow = 3648106465U;
    msg.lat = 0.2237364685;
    msg.lon = 0.769622310341;
    msg.height_ell = 0.944772807031;
    msg.height_sea = 0.284896798176;
    msg.hacc = 0.152267231692;
    msg.vacc = 0.378582549042;
    msg.vel_n = 0.736468154561;
    msg.vel_e = 0.545804857745;
    msg.vel_d = 0.0179113790458;
    msg.speed = 0.932767677946;
    msg.gspeed = 0.771377970777;
    msg.heading = 0.471278159687;
    msg.sacc = 0.637500753828;
    msg.cacc = 0.360028438667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.536009618241);
    msg.setSource(53923U);
    msg.setSourceEntity(78U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(25U);
    msg.id = 55U;
    msg.value = 0.431036822188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.436182380533);
    msg.setSource(61499U);
    msg.setSourceEntity(35U);
    msg.setDestination(3570U);
    msg.setDestinationEntity(199U);
    msg.id = 147U;
    msg.value = 0.186138869467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.600021872975);
    msg.setSource(19294U);
    msg.setSourceEntity(13U);
    msg.setDestination(40688U);
    msg.setDestinationEntity(196U);
    msg.id = 92U;
    msg.value = 0.147598786293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.846807820185);
    msg.setSource(38386U);
    msg.setSourceEntity(191U);
    msg.setDestination(46564U);
    msg.setDestinationEntity(20U);
    msg.x = 0.826907046772;
    msg.y = 0.792112334009;
    msg.z = 0.744307750328;
    msg.phi = 0.779937724274;
    msg.theta = 0.0777379894534;
    msg.psi = 0.687844755836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.282706777722);
    msg.setSource(57238U);
    msg.setSourceEntity(99U);
    msg.setDestination(39192U);
    msg.setDestinationEntity(133U);
    msg.x = 0.715373308909;
    msg.y = 0.519754478605;
    msg.z = 0.0075012994441;
    msg.phi = 0.626491021376;
    msg.theta = 0.347625689583;
    msg.psi = 0.896562972883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.671944018304);
    msg.setSource(25780U);
    msg.setSourceEntity(238U);
    msg.setDestination(44188U);
    msg.setDestinationEntity(191U);
    msg.x = 0.104621672402;
    msg.y = 0.193751558739;
    msg.z = 0.674276507625;
    msg.phi = 0.773558481046;
    msg.theta = 0.768552067853;
    msg.psi = 0.114204435514;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.475524821574);
    msg.setSource(39897U);
    msg.setSourceEntity(140U);
    msg.setDestination(62360U);
    msg.setDestinationEntity(242U);
    msg.beam_width = 0.832599326286;
    msg.beam_height = 0.512687940786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.884495280913);
    msg.setSource(47838U);
    msg.setSourceEntity(186U);
    msg.setDestination(65340U);
    msg.setDestinationEntity(152U);
    msg.beam_width = 0.0202555437329;
    msg.beam_height = 0.151064559471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.269455389452);
    msg.setSource(548U);
    msg.setSourceEntity(35U);
    msg.setDestination(34667U);
    msg.setDestinationEntity(122U);
    msg.beam_width = 0.200309382997;
    msg.beam_height = 0.0519407881789;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.963625787106);
    msg.setSource(47430U);
    msg.setSourceEntity(153U);
    msg.setDestination(15971U);
    msg.setDestinationEntity(126U);
    msg.sane = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.410216969097);
    msg.setSource(44421U);
    msg.setSourceEntity(7U);
    msg.setDestination(25938U);
    msg.setDestinationEntity(32U);
    msg.sane = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.883063888977);
    msg.setSource(39174U);
    msg.setSourceEntity(224U);
    msg.setDestination(38472U);
    msg.setDestinationEntity(153U);
    msg.sane = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.855737069696);
    msg.setSource(33558U);
    msg.setSourceEntity(152U);
    msg.setDestination(64538U);
    msg.setDestinationEntity(3U);
    msg.value = 0.444187218612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.705945625693);
    msg.setSource(2116U);
    msg.setSourceEntity(68U);
    msg.setDestination(28404U);
    msg.setDestinationEntity(37U);
    msg.value = 0.405901282121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.3562292812);
    msg.setSource(30447U);
    msg.setSourceEntity(111U);
    msg.setDestination(60069U);
    msg.setDestinationEntity(221U);
    msg.value = 0.403301225248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.55469034913);
    msg.setSource(35043U);
    msg.setSourceEntity(57U);
    msg.setDestination(26456U);
    msg.setDestinationEntity(196U);
    msg.value = 0.335452815142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.823568297982);
    msg.setSource(44125U);
    msg.setSourceEntity(128U);
    msg.setDestination(54392U);
    msg.setDestinationEntity(149U);
    msg.value = 0.368116351709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.720598068063);
    msg.setSource(11497U);
    msg.setSourceEntity(195U);
    msg.setDestination(19163U);
    msg.setDestinationEntity(153U);
    msg.value = 0.225682900022;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.00759290148094);
    msg.setSource(18881U);
    msg.setSourceEntity(111U);
    msg.setDestination(33605U);
    msg.setDestinationEntity(25U);
    msg.value = 0.80595043168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.756787986574);
    msg.setSource(59073U);
    msg.setSourceEntity(74U);
    msg.setDestination(55842U);
    msg.setDestinationEntity(251U);
    msg.value = 0.668055601566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.740920450874);
    msg.setSource(16494U);
    msg.setSourceEntity(75U);
    msg.setDestination(61093U);
    msg.setDestinationEntity(83U);
    msg.value = 0.546631040695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.334524673944);
    msg.setSource(40205U);
    msg.setSourceEntity(120U);
    msg.setDestination(17696U);
    msg.setDestinationEntity(97U);
    msg.id = 65U;
    msg.zoom = 51U;
    msg.action = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.309018982177);
    msg.setSource(35353U);
    msg.setSourceEntity(52U);
    msg.setDestination(57363U);
    msg.setDestinationEntity(242U);
    msg.id = 138U;
    msg.zoom = 13U;
    msg.action = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.765866539894);
    msg.setSource(32971U);
    msg.setSourceEntity(143U);
    msg.setDestination(63777U);
    msg.setDestinationEntity(139U);
    msg.id = 61U;
    msg.zoom = 198U;
    msg.action = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.629743507872);
    msg.setSource(31895U);
    msg.setSourceEntity(222U);
    msg.setDestination(12286U);
    msg.setDestinationEntity(113U);
    msg.id = 122U;
    msg.value = 0.504695425057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.789899682312);
    msg.setSource(45238U);
    msg.setSourceEntity(212U);
    msg.setDestination(57751U);
    msg.setDestinationEntity(60U);
    msg.id = 148U;
    msg.value = 0.215412243061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.536610503648);
    msg.setSource(26763U);
    msg.setSourceEntity(20U);
    msg.setDestination(16983U);
    msg.setDestinationEntity(120U);
    msg.id = 68U;
    msg.value = 0.257818806707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.246354462587);
    msg.setSource(6161U);
    msg.setSourceEntity(149U);
    msg.setDestination(9592U);
    msg.setDestinationEntity(48U);
    msg.id = 7U;
    msg.value = 0.359836109809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.68841767097);
    msg.setSource(16057U);
    msg.setSourceEntity(200U);
    msg.setDestination(58482U);
    msg.setDestinationEntity(185U);
    msg.id = 248U;
    msg.value = 0.177280466271;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.747183992251);
    msg.setSource(6892U);
    msg.setSourceEntity(18U);
    msg.setDestination(8800U);
    msg.setDestinationEntity(108U);
    msg.id = 150U;
    msg.value = 0.99850947934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.689741267221);
    msg.setSource(12538U);
    msg.setSourceEntity(250U);
    msg.setDestination(15325U);
    msg.setDestinationEntity(4U);
    msg.id = 235U;
    msg.angle = 0.846384516292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.373429622209);
    msg.setSource(22599U);
    msg.setSourceEntity(112U);
    msg.setDestination(19563U);
    msg.setDestinationEntity(83U);
    msg.id = 186U;
    msg.angle = 0.725879892374;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.762186745104);
    msg.setSource(9220U);
    msg.setSourceEntity(100U);
    msg.setDestination(18532U);
    msg.setDestinationEntity(72U);
    msg.id = 142U;
    msg.angle = 0.165704289244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.64725606338);
    msg.setSource(22175U);
    msg.setSourceEntity(207U);
    msg.setDestination(36010U);
    msg.setDestinationEntity(163U);
    msg.op = 168U;
    msg.actions.assign("GDONXORWYGMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0526303002129);
    msg.setSource(44215U);
    msg.setSourceEntity(141U);
    msg.setDestination(40537U);
    msg.setDestinationEntity(78U);
    msg.op = 159U;
    msg.actions.assign("DHWCXKZOIHXYRXUGAVPBMHBXOGOQBYRFKSBWZGDVTYABCBQSOIDJHUDSCSSWAADVQPXIPEXVTNZAVHRKQOYLHJEUFLLPMHUXIZCUMGEWNJMEGEKWNUKKVMLSMRBPNRLSWDPQMPKBSGKHYRHCQFMTJLRULBACUXNATADYCCETWVTJTBDILFOZLMQZAJMGRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0265323569138);
    msg.setSource(61232U);
    msg.setSourceEntity(172U);
    msg.setDestination(52430U);
    msg.setDestinationEntity(94U);
    msg.op = 112U;
    msg.actions.assign("ATBZNIXBHFTTBEMGHRANSQVUOEQAZIIZPYWJEHOAJSDCGEYXARXMEDCTSUOJUILVJWCRKTKZXTKSBUKSYKUEFBVIMZSRPXYOYFYQCWXBNQJQRPDHPIMICVOVGDQHZIMLMPJRXAKMBFNONNTNWSGCVOYFDFOQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.68738600518);
    msg.setSource(25042U);
    msg.setSourceEntity(179U);
    msg.setDestination(62639U);
    msg.setDestinationEntity(162U);
    msg.actions.assign("QZJJZAFQIHLWCLMELBNRKBVKKVPWXPXTDVHACCGXZXTCHPQQGUAJPYSTTIIVVMKUKSZYEQXKWQFGQGOXXVBLBYXMDVVKBARAWWGIGPJHTBTMLNTLLNEOPSXHPOAAYZLRCCSGFWFZUGBEMQDYKMSIDDRRJUROOUEHFCMNYUVBZQYLNRYGHNKSGOMBPCCEMTUFTFDSIXCAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.836803289487);
    msg.setSource(37634U);
    msg.setSourceEntity(154U);
    msg.setDestination(15767U);
    msg.setDestinationEntity(79U);
    msg.actions.assign("CXERCVRMOFDZFCFBSGNPZDDIEEZLOTNZKJAAYUBNUWIUOAFJIOTGWNEJTOAUVXAWHLBBOQGZSZGVMHIJSL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.167830354083);
    msg.setSource(27715U);
    msg.setSourceEntity(3U);
    msg.setDestination(58520U);
    msg.setDestinationEntity(254U);
    msg.actions.assign("QGXFHBWBYLHZKXXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.257792346792);
    msg.setSource(40709U);
    msg.setSourceEntity(10U);
    msg.setDestination(32896U);
    msg.setDestinationEntity(129U);
    msg.button = 249U;
    msg.value = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.482262030687);
    msg.setSource(59392U);
    msg.setSourceEntity(129U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(238U);
    msg.button = 112U;
    msg.value = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.0766797236401);
    msg.setSource(55916U);
    msg.setSourceEntity(194U);
    msg.setDestination(19739U);
    msg.setDestinationEntity(159U);
    msg.button = 142U;
    msg.value = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.0429191218097);
    msg.setSource(27892U);
    msg.setSourceEntity(75U);
    msg.setDestination(10825U);
    msg.setDestinationEntity(44U);
    msg.op = 233U;
    msg.text.assign("ZQKAJVWJQGLDVUOOGILEVCDZEOZACLNYRODNHWIAEJSQJABZDPRSKRTJFAJMSDIGWLNXYNNYMPMNCWBKBHXDXSPQFVRLDGWZSAKREVBEJBCWHMTVPCPZPOTUIXPELMIWGOVQFGURQDTQCMDHKKCNHXHYIKCPYRUYCBKJAXELQZUTLUYUOHHMNVVATNIYAEXBMKFRGRAWIOGQIFBFLFJXSLXER");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.361389849094);
    msg.setSource(44421U);
    msg.setSourceEntity(16U);
    msg.setDestination(32626U);
    msg.setDestinationEntity(19U);
    msg.op = 148U;
    msg.text.assign("UFBDTMAUWCKQSUVXWFQYJQVYODILOKFKIXPGTIWLSMLNRBJPFCPHZCVMIBSKWTOWXWLNGAPZMFZHLVGUBIEAXKDCXUNKRGJLVCWTYXAYTAGUSTIRGFDBDPIFSGEYOEBZXHQDNHHMSDAZPZTLMZQXOPCMIUULHAVFZANNJDGBOKAWQHUEIRYXINNLRKVCRTVJGEJEGBNRJTTPSQVQCDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.529811501838);
    msg.setSource(57438U);
    msg.setSourceEntity(105U);
    msg.setDestination(56784U);
    msg.setDestinationEntity(109U);
    msg.op = 26U;
    msg.text.assign("KMVPUPYOFQMVLGXDALAHRYCVULHEAKSWFPTHZPDYAFNBEXHEXJXNONAGGUTHDDZYCMTQOQUDSOFDMRCHBKRFFWEPBUQUYEGWOYNHLGCJJCSZTLSAHNRKUWEAJXFUHIVSPCINRJXBPLOSYWWQDQGUMTQOJOBBIVDBDQTTTGKCBBQRENMSVGIMRKJMCGMKOZXVZZETSNAUIEFKHRXBAQPCNKNWFAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.46841962934);
    msg.setSource(51783U);
    msg.setSourceEntity(105U);
    msg.setDestination(55291U);
    msg.setDestinationEntity(148U);
    msg.op = 30U;
    msg.time_remain = 0.435483443942;
    msg.sched_time = 0.118311275382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.827182517947);
    msg.setSource(22095U);
    msg.setSourceEntity(165U);
    msg.setDestination(22920U);
    msg.setDestinationEntity(213U);
    msg.op = 88U;
    msg.time_remain = 0.833082858603;
    msg.sched_time = 0.955677843367;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.451530764821);
    msg.setSource(51718U);
    msg.setSourceEntity(64U);
    msg.setDestination(19072U);
    msg.setDestinationEntity(49U);
    msg.op = 29U;
    msg.time_remain = 0.87786947755;
    msg.sched_time = 0.150411056396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.177615009201);
    msg.setSource(26563U);
    msg.setSourceEntity(157U);
    msg.setDestination(50539U);
    msg.setDestinationEntity(106U);
    msg.name.assign("AUARMEJFKBZPFOGEHVWASWJDPUBDICQFUBMQJFXKUIAEGWSTEBMGKOZMKTAYYKPPLSGYGRJZFMWQ");
    msg.op = 175U;
    msg.sched_time = 0.0968080859915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.983450781462);
    msg.setSource(42959U);
    msg.setSourceEntity(32U);
    msg.setDestination(29497U);
    msg.setDestinationEntity(205U);
    msg.name.assign("QCWAHDBYGPSFM");
    msg.op = 187U;
    msg.sched_time = 0.354742696437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.130782504859);
    msg.setSource(4914U);
    msg.setSourceEntity(192U);
    msg.setDestination(45822U);
    msg.setDestinationEntity(164U);
    msg.name.assign("JXXPKOQWEADYAKJCBVJAQLEDPHPSLESSXLWSTAUBNSJNQAUJHPAYIZBIESJGUFDGNEIGNPRCY");
    msg.op = 157U;
    msg.sched_time = 0.00714804247458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.821194958187);
    msg.setSource(37383U);
    msg.setSourceEntity(218U);
    msg.setDestination(25831U);
    msg.setDestinationEntity(191U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.0638667341755);
    msg.setSource(8527U);
    msg.setSourceEntity(20U);
    msg.setDestination(32756U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.0221657568254);
    msg.setSource(41699U);
    msg.setSourceEntity(38U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(170U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.345332432727);
    msg.setSource(46322U);
    msg.setSourceEntity(224U);
    msg.setDestination(57900U);
    msg.setDestinationEntity(151U);
    msg.name.assign("VEIREQMGSKDCKLMAOCHDUKQUGSLHLDANFVNZZFJYJXVSSBDJVGGDIOZSITMUWESFBENWNYMZCFKNAPQXJBPLBMMZQUHYECGXRIBRPGSMQJTYCEOTVJILZKHEWKXWCXUMOATFTHDENCIWAPZSB");
    msg.state = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.298183675835);
    msg.setSource(35373U);
    msg.setSourceEntity(34U);
    msg.setDestination(23790U);
    msg.setDestinationEntity(69U);
    msg.name.assign("CEQODUAESBQSZSDPCZPDGEDVXYHTSNAGDUQFHJVNH");
    msg.state = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.74876992991);
    msg.setSource(54413U);
    msg.setSourceEntity(206U);
    msg.setDestination(33268U);
    msg.setDestinationEntity(228U);
    msg.name.assign("LHUDIJYDIPROPUZZKYEZCHRYVQFOJLVEPZBLIBSVBFMMGVHQFSVVBMDZGXXPGASKWCBOHJFEAIWTCDWHMQXAFMIRICTSCQI");
    msg.state = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.264118706134);
    msg.setSource(49401U);
    msg.setSourceEntity(154U);
    msg.setDestination(30289U);
    msg.setDestinationEntity(83U);
    msg.name.assign("DQGYULMQNBYBUXXSKQFLMAIWYVWHHUXIKNKVLQWYXYUVNIWKCOATJHVPRTDGCFLTFCGFXWRVAVNEFABCDWOIKVPDOKURZEATHFVIXEFPLUBVJIFOSLBRAZDJKHSMRSTLQPD");
    msg.value = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.55323466671);
    msg.setSource(36383U);
    msg.setSourceEntity(66U);
    msg.setDestination(45775U);
    msg.setDestinationEntity(122U);
    msg.name.assign("JSUUBIJCTQTMPFVZOGAYFPMOERQXZIHPSRKDJZLGNHNBDIRHZZJCWGGVJANFTNOSHAXATUEIFHXXMYIBBTYWUVHQKOSLHAXDVOKJCBIQNLSAHPZHBQOWBZLCQSGTETJVCETOFDGEMMTYIFUFKYUQNYKMMYVXBGWRUJKDPEUBLZRLKRKFJPORZGNLCFQVJ");
    msg.value = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.947660288722);
    msg.setSource(38288U);
    msg.setSourceEntity(45U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(39U);
    msg.name.assign("XNXXHVYLCFTLHASXFRBIRBMFWLJIZXSIZJZRUGWCUNGIEYXQRLTOARIRYAFVZLEQYOKSNSOYSXABLSOAQFP");
    msg.value = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.222065190997);
    msg.setSource(9397U);
    msg.setSourceEntity(105U);
    msg.setDestination(11610U);
    msg.setDestinationEntity(0U);
    msg.name.assign("FTDGTOUGDBAFNVWXVENDWRFPQTYCMBKYKEVEGDFQXUMXMEJAQZKONHWXBEZMXOZGNLILWQMFRNWCOYOTYEANJZPJPYCSUVGJQZFZCJKBRSSGDZSLTHVIVZLUMNDUXPCEWPLTUXXTUGHQVRSITCKPJOACERUJXRYKALNYDLKIOBORPVQMWSHGAHRYSXCEIKHORFTDZVAIUOJBCDWCGLJBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.793924271494);
    msg.setSource(9131U);
    msg.setSourceEntity(7U);
    msg.setDestination(28285U);
    msg.setDestinationEntity(198U);
    msg.name.assign("VVLQXBSAXJTYEFTOWBEDVWTJFQOGJDDUBGELSNFPDKZBICRQPMILYJFLNTOARZTKRKGCINUYBOEVHRJGBSNCRICBQAYXCYPTZMKHJMMGEVFXRPFQMVSNHBUWUTKUWGOULVHLMDFIODIPCWOJZOKGQJTPXHEIYFACTWAPGEQCXRAFXVDQZCUUHJHYWGIBSSWZERLAIYRPSPEOWKNQKMKNVLEANXZODNPXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.0960478045565);
    msg.setSource(6014U);
    msg.setSourceEntity(43U);
    msg.setDestination(34007U);
    msg.setDestinationEntity(81U);
    msg.name.assign("PBJSWQJKUZFHCHPVQWSQMIFVDYCYWRUXMFMSIYETHWIQBSNABNPOVMUIHEXNYBEQXOXAHIDPGWLVBPUSKAOOCKDZRZIDSBYMWAUCXQXWKIJDYUFHWRLSTOHANAEGCVWVNUOMORDNIRGSLQTAJCZZKDJZWQXDDUTGPRTFYEAOXSNHZCGHTFRKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.510307937112);
    msg.setSource(45974U);
    msg.setSourceEntity(90U);
    msg.setDestination(26508U);
    msg.setDestinationEntity(119U);
    msg.name.assign("PCYSQDJPRBBUSXOBPBTN");
    msg.value = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.349182935688);
    msg.setSource(34297U);
    msg.setSourceEntity(226U);
    msg.setDestination(65233U);
    msg.setDestinationEntity(36U);
    msg.name.assign("YPNQHDVDRJESJYFYALRZEHKJDYTQBJPYYGCFAEKXHCVCJJEGOKWXFRNISMHXPXVQZVZCLSDARHUYAMLRWMZXIEFVDMMOALMAIVQB");
    msg.value = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.742342076298);
    msg.setSource(57468U);
    msg.setSourceEntity(38U);
    msg.setDestination(29038U);
    msg.setDestinationEntity(190U);
    msg.name.assign("GSQESBTFNGUOEXNLXFUKSVQAMENAEYMDQBXAVEVUUUDJVRRFQNHUIBHDYALPLRMZZOTJWONKIVPBLAWZAEOVLVONIDBDPERAYJWUCDCMVNRFX");
    msg.value = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.929597750777);
    msg.setSource(26530U);
    msg.setSourceEntity(83U);
    msg.setDestination(34438U);
    msg.setDestinationEntity(176U);
    msg.id = 201U;
    msg.period = 2050052220U;
    msg.duty_cycle = 2949738098U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.228954694181);
    msg.setSource(50569U);
    msg.setSourceEntity(251U);
    msg.setDestination(8288U);
    msg.setDestinationEntity(215U);
    msg.id = 40U;
    msg.period = 1571568422U;
    msg.duty_cycle = 165142169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.144285463438);
    msg.setSource(5744U);
    msg.setSourceEntity(89U);
    msg.setDestination(1864U);
    msg.setDestinationEntity(48U);
    msg.id = 101U;
    msg.period = 2024403454U;
    msg.duty_cycle = 2624208547U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.874933559528);
    msg.setSource(23222U);
    msg.setSourceEntity(222U);
    msg.setDestination(59966U);
    msg.setDestinationEntity(82U);
    msg.id = 21U;
    msg.period = 3354910960U;
    msg.duty_cycle = 2718600108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.294052835364);
    msg.setSource(1393U);
    msg.setSourceEntity(130U);
    msg.setDestination(44237U);
    msg.setDestinationEntity(249U);
    msg.id = 249U;
    msg.period = 360396494U;
    msg.duty_cycle = 1600384721U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.581311576271);
    msg.setSource(20651U);
    msg.setSourceEntity(215U);
    msg.setDestination(42667U);
    msg.setDestinationEntity(142U);
    msg.id = 112U;
    msg.period = 1148904096U;
    msg.duty_cycle = 2186459716U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.849118079165);
    msg.setSource(55646U);
    msg.setSourceEntity(150U);
    msg.setDestination(43128U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.200326391151;
    msg.lon = 0.349838927279;
    msg.height = 0.0598329735185;
    msg.x = 0.943082374355;
    msg.y = 0.393621188634;
    msg.z = 0.0210523969145;
    msg.phi = 0.223482448726;
    msg.theta = 0.443208397543;
    msg.psi = 0.914875232402;
    msg.u = 0.620401478064;
    msg.v = 0.458753665414;
    msg.w = 0.567494485053;
    msg.vx = 0.765064947476;
    msg.vy = 0.834638468176;
    msg.vz = 0.285445308288;
    msg.p = 0.372557875111;
    msg.q = 0.493267140196;
    msg.r = 0.65230993294;
    msg.depth = 0.377562617018;
    msg.alt = 0.35963307736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.979266600541);
    msg.setSource(50741U);
    msg.setSourceEntity(75U);
    msg.setDestination(47362U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.529947139197;
    msg.lon = 0.897287148436;
    msg.height = 0.24748873935;
    msg.x = 0.392196674146;
    msg.y = 0.895363005083;
    msg.z = 0.71727151581;
    msg.phi = 0.231076027633;
    msg.theta = 0.819187516956;
    msg.psi = 0.781442635218;
    msg.u = 0.231959647607;
    msg.v = 0.880125610687;
    msg.w = 0.880439713299;
    msg.vx = 0.198679161577;
    msg.vy = 0.120725910036;
    msg.vz = 0.124307013943;
    msg.p = 0.565199975642;
    msg.q = 0.383337597605;
    msg.r = 0.173971389306;
    msg.depth = 0.99612644511;
    msg.alt = 0.069617838722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.715732386849);
    msg.setSource(15798U);
    msg.setSourceEntity(80U);
    msg.setDestination(22087U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.65528152594;
    msg.lon = 0.569589360694;
    msg.height = 0.243163401409;
    msg.x = 0.23207229266;
    msg.y = 0.280639411259;
    msg.z = 0.982845226119;
    msg.phi = 0.906904314869;
    msg.theta = 0.106513995338;
    msg.psi = 0.393228489287;
    msg.u = 0.08617100446;
    msg.v = 0.934844688636;
    msg.w = 0.437312327785;
    msg.vx = 0.786418989878;
    msg.vy = 0.666308848903;
    msg.vz = 0.24970112405;
    msg.p = 0.836024297491;
    msg.q = 0.531528668261;
    msg.r = 0.0474067006432;
    msg.depth = 0.357812793419;
    msg.alt = 0.266271236536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.0649932415412);
    msg.setSource(12346U);
    msg.setSourceEntity(24U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(155U);
    msg.x = 0.881561778473;
    msg.y = 0.161395688191;
    msg.z = 0.150060626285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.978371220323);
    msg.setSource(60053U);
    msg.setSourceEntity(183U);
    msg.setDestination(16292U);
    msg.setDestinationEntity(170U);
    msg.x = 0.546141122951;
    msg.y = 0.952001238469;
    msg.z = 0.94510616091;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.619983962042);
    msg.setSource(60708U);
    msg.setSourceEntity(188U);
    msg.setDestination(9931U);
    msg.setDestinationEntity(164U);
    msg.x = 0.941491318275;
    msg.y = 0.799921144528;
    msg.z = 0.0874594235886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.401549248703);
    msg.setSource(38491U);
    msg.setSourceEntity(33U);
    msg.setDestination(33893U);
    msg.setDestinationEntity(140U);
    msg.value = 0.814799201139;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.929495572419);
    msg.setSource(39694U);
    msg.setSourceEntity(96U);
    msg.setDestination(743U);
    msg.setDestinationEntity(61U);
    msg.value = 0.168898144532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.468142934439);
    msg.setSource(38945U);
    msg.setSourceEntity(218U);
    msg.setDestination(52405U);
    msg.setDestinationEntity(243U);
    msg.value = 0.461805502618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.652680993785);
    msg.setSource(6051U);
    msg.setSourceEntity(175U);
    msg.setDestination(49508U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0558304546802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.632131666328);
    msg.setSource(27139U);
    msg.setSourceEntity(142U);
    msg.setDestination(19992U);
    msg.setDestinationEntity(72U);
    msg.value = 0.805952020311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.515967078967);
    msg.setSource(3421U);
    msg.setSourceEntity(107U);
    msg.setDestination(57436U);
    msg.setDestinationEntity(27U);
    msg.value = 0.842903093746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.214752108196);
    msg.setSource(34570U);
    msg.setSourceEntity(248U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(31U);
    msg.x = 0.593600672594;
    msg.y = 0.984720258271;
    msg.z = 0.175843898772;
    msg.phi = 0.298609633251;
    msg.theta = 0.542760660373;
    msg.psi = 0.633078593702;
    msg.p = 0.32724363928;
    msg.q = 0.318914872392;
    msg.r = 0.101846179336;
    msg.u = 0.89644239309;
    msg.v = 0.605143209372;
    msg.w = 0.0575453795502;
    msg.bias_psi = 0.342039684217;
    msg.bias_r = 0.482316132965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.638123622775);
    msg.setSource(43982U);
    msg.setSourceEntity(241U);
    msg.setDestination(42644U);
    msg.setDestinationEntity(9U);
    msg.x = 0.115984247829;
    msg.y = 0.191076251288;
    msg.z = 0.731537410808;
    msg.phi = 0.711756250968;
    msg.theta = 0.541921460651;
    msg.psi = 0.00786303216535;
    msg.p = 0.966860122739;
    msg.q = 0.768055891292;
    msg.r = 0.671400733771;
    msg.u = 0.140317151709;
    msg.v = 0.822167658035;
    msg.w = 0.716095064216;
    msg.bias_psi = 0.464055657297;
    msg.bias_r = 0.279407060884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.637338970052);
    msg.setSource(58188U);
    msg.setSourceEntity(79U);
    msg.setDestination(60898U);
    msg.setDestinationEntity(42U);
    msg.x = 0.525266083816;
    msg.y = 0.726733521852;
    msg.z = 0.339262045429;
    msg.phi = 0.223396023064;
    msg.theta = 0.501546180774;
    msg.psi = 0.32707595823;
    msg.p = 0.627696357796;
    msg.q = 0.677151419195;
    msg.r = 0.161433585389;
    msg.u = 0.710048641305;
    msg.v = 0.862853836547;
    msg.w = 0.25318290898;
    msg.bias_psi = 0.253136819001;
    msg.bias_r = 0.831887246013;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.0693842288009);
    msg.setSource(44658U);
    msg.setSourceEntity(201U);
    msg.setDestination(20817U);
    msg.setDestinationEntity(87U);
    msg.bias_psi = 0.238237235421;
    msg.bias_r = 0.516957737561;
    msg.cog = 0.62444870702;
    msg.cyaw = 0.0576513933124;
    msg.lbl_rej_level = 0.157886697816;
    msg.gps_rej_level = 0.117956720043;
    msg.custom_x = 0.606958269753;
    msg.custom_y = 0.569634585608;
    msg.custom_z = 0.689685462738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.523998314989);
    msg.setSource(22530U);
    msg.setSourceEntity(167U);
    msg.setDestination(44100U);
    msg.setDestinationEntity(128U);
    msg.bias_psi = 0.80196995379;
    msg.bias_r = 0.568099123068;
    msg.cog = 0.0230711373787;
    msg.cyaw = 0.868106743065;
    msg.lbl_rej_level = 0.185622152297;
    msg.gps_rej_level = 0.932674942927;
    msg.custom_x = 0.607878520725;
    msg.custom_y = 0.256454850851;
    msg.custom_z = 0.902805390868;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.86784686524);
    msg.setSource(16939U);
    msg.setSourceEntity(167U);
    msg.setDestination(50072U);
    msg.setDestinationEntity(127U);
    msg.bias_psi = 0.965553736708;
    msg.bias_r = 0.597140022944;
    msg.cog = 0.881713232854;
    msg.cyaw = 0.137982849587;
    msg.lbl_rej_level = 0.929509650745;
    msg.gps_rej_level = 0.939575872349;
    msg.custom_x = 0.599765963316;
    msg.custom_y = 0.708554059678;
    msg.custom_z = 0.645715245828;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.795212692482);
    msg.setSource(26330U);
    msg.setSourceEntity(126U);
    msg.setDestination(21902U);
    msg.setDestinationEntity(212U);
    msg.utc_time = 0.14274705954;
    msg.reason = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.987051590772);
    msg.setSource(26436U);
    msg.setSourceEntity(70U);
    msg.setDestination(24910U);
    msg.setDestinationEntity(199U);
    msg.utc_time = 0.0446567739853;
    msg.reason = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.104766256235);
    msg.setSource(48404U);
    msg.setSourceEntity(67U);
    msg.setDestination(47407U);
    msg.setDestinationEntity(95U);
    msg.utc_time = 0.0652578808789;
    msg.reason = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.982946383366);
    msg.setSource(50473U);
    msg.setSourceEntity(191U);
    msg.setDestination(64301U);
    msg.setDestinationEntity(236U);
    msg.id = 94U;
    msg.range = 0.706146498425;
    msg.acceptance = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.259828629599);
    msg.setSource(26773U);
    msg.setSourceEntity(134U);
    msg.setDestination(34619U);
    msg.setDestinationEntity(121U);
    msg.id = 170U;
    msg.range = 0.966455716641;
    msg.acceptance = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.406577955145);
    msg.setSource(24290U);
    msg.setSourceEntity(167U);
    msg.setDestination(23908U);
    msg.setDestinationEntity(164U);
    msg.id = 44U;
    msg.range = 0.749882553959;
    msg.acceptance = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.38519457383);
    msg.setSource(16429U);
    msg.setSourceEntity(121U);
    msg.setDestination(16179U);
    msg.setDestinationEntity(108U);
    msg.type = 42U;
    msg.reason = 16U;
    msg.value = 0.31202757688;
    msg.timestep = 0.856097093176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.45329012145);
    msg.setSource(56499U);
    msg.setSourceEntity(54U);
    msg.setDestination(10374U);
    msg.setDestinationEntity(204U);
    msg.type = 217U;
    msg.reason = 82U;
    msg.value = 0.450158002379;
    msg.timestep = 0.379549347403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.360704715625);
    msg.setSource(50101U);
    msg.setSourceEntity(154U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(82U);
    msg.type = 186U;
    msg.reason = 177U;
    msg.value = 0.0875914747491;
    msg.timestep = 0.131887501316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.834772736778);
    msg.setSource(12262U);
    msg.setSourceEntity(7U);
    msg.setDestination(43307U);
    msg.setDestinationEntity(104U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GVWZRAYLCLOHPTHSASGRDNRWQCSIWDWWBEUZSGSFQRXKIWDZBOJSFMJKEQJTYPQDKRUFYLTVCPRMNFQCOXRRXLAPFXNIFMDHEHWTATAEMCVHHBMYNQNEUUOPQGUBCEBMKTNQYVPDLHXNZEKJWGJIMFWVZXLXIPHVMUHBKVZYAOLYATPESMBYZLPEZIKGTSEOBBXLJSJVZIGNYRCJDGFDJRYUQNDINXIOVKMCO");
    tmp_msg_0.lat = 0.617487353293;
    tmp_msg_0.lon = 0.319935330254;
    tmp_msg_0.depth = 0.853703637996;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 148U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.10022278737;
    msg.y = 0.539142868426;
    msg.var_x = 0.0868856974471;
    msg.var_y = 0.791508319862;
    msg.distance = 0.907106346263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.390598320841);
    msg.setSource(23006U);
    msg.setSourceEntity(51U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(242U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LILNCADZFFJQXNUUMMNFKCQAGENPXNFFWXPNZWPJTRIHOZLGRGJFTTLANANYXRSOJJQLBZMXCXTIHVTHDDCIIKLQFCTAISJRDCQBYRPJWYOAGIKUXPKVMWPEJKECSBPSEBBSKGVGCGZRVWSWQIGZQTKEBOIVQETEZNDHSOUXPUDMHWSHUQROMCOBFHHVVFJXDKEJIYMQMLOBTSAMAHLUGNY");
    tmp_msg_0.lat = 0.215699286592;
    tmp_msg_0.lon = 0.434078088891;
    tmp_msg_0.depth = 0.250727121547;
    tmp_msg_0.query_channel = 145U;
    tmp_msg_0.reply_channel = 0U;
    tmp_msg_0.transponder_delay = 182U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.858366988591;
    msg.y = 0.000133963321147;
    msg.var_x = 0.605358863746;
    msg.var_y = 0.802103778689;
    msg.distance = 0.560384906635;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.141566391957);
    msg.setSource(6265U);
    msg.setSourceEntity(252U);
    msg.setDestination(36568U);
    msg.setDestinationEntity(154U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BRRBESTKTXLMZEYPFMYPSZOIDBRABNEMYLAJCHOH");
    tmp_msg_0.lat = 0.418045618865;
    tmp_msg_0.lon = 0.920358064715;
    tmp_msg_0.depth = 0.816863034783;
    tmp_msg_0.query_channel = 12U;
    tmp_msg_0.reply_channel = 89U;
    tmp_msg_0.transponder_delay = 41U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.505286459567;
    msg.y = 0.351973975306;
    msg.var_x = 0.0630025988797;
    msg.var_y = 0.691822260853;
    msg.distance = 0.63472260526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.777165236641);
    msg.setSource(22883U);
    msg.setSourceEntity(4U);
    msg.setDestination(18674U);
    msg.setDestinationEntity(118U);
    msg.state = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.289748389661);
    msg.setSource(259U);
    msg.setSourceEntity(20U);
    msg.setDestination(48640U);
    msg.setDestinationEntity(111U);
    msg.state = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.441481338141);
    msg.setSource(28982U);
    msg.setSourceEntity(244U);
    msg.setDestination(11135U);
    msg.setDestinationEntity(155U);
    msg.state = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.274931354906);
    msg.setSource(6991U);
    msg.setSourceEntity(21U);
    msg.setDestination(33471U);
    msg.setDestinationEntity(164U);
    msg.x = 0.126514505647;
    msg.y = 0.800636649708;
    msg.z = 0.119110318914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.506830366334);
    msg.setSource(14042U);
    msg.setSourceEntity(252U);
    msg.setDestination(40182U);
    msg.setDestinationEntity(17U);
    msg.x = 0.943260756424;
    msg.y = 0.690384266166;
    msg.z = 0.705812239917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.766967615531);
    msg.setSource(47516U);
    msg.setSourceEntity(21U);
    msg.setDestination(6860U);
    msg.setDestinationEntity(232U);
    msg.x = 0.214334354286;
    msg.y = 0.521914856576;
    msg.z = 0.930290164585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.348195221753);
    msg.setSource(51840U);
    msg.setSourceEntity(21U);
    msg.setDestination(47227U);
    msg.setDestinationEntity(230U);
    msg.value = 0.0119282704194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.669849382502);
    msg.setSource(11043U);
    msg.setSourceEntity(62U);
    msg.setDestination(43295U);
    msg.setDestinationEntity(57U);
    msg.value = 0.984677220444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.970532178982);
    msg.setSource(47515U);
    msg.setSourceEntity(212U);
    msg.setDestination(60852U);
    msg.setDestinationEntity(182U);
    msg.value = 0.891668648939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.870865828576);
    msg.setSource(18767U);
    msg.setSourceEntity(16U);
    msg.setDestination(3852U);
    msg.setDestinationEntity(234U);
    msg.value = 0.204179129792;
    msg.z_units = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.579836087426);
    msg.setSource(41381U);
    msg.setSourceEntity(88U);
    msg.setDestination(22317U);
    msg.setDestinationEntity(167U);
    msg.value = 0.607485445895;
    msg.z_units = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.0784150307338);
    msg.setSource(31494U);
    msg.setSourceEntity(54U);
    msg.setDestination(25486U);
    msg.setDestinationEntity(29U);
    msg.value = 0.2466991477;
    msg.z_units = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.944487420138);
    msg.setSource(19805U);
    msg.setSourceEntity(153U);
    msg.setDestination(21399U);
    msg.setDestinationEntity(114U);
    msg.value = 0.999039099205;
    msg.speed_units = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.87021106577);
    msg.setSource(2670U);
    msg.setSourceEntity(19U);
    msg.setDestination(33168U);
    msg.setDestinationEntity(97U);
    msg.value = 0.434829658693;
    msg.speed_units = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.433233230196);
    msg.setSource(7527U);
    msg.setSourceEntity(101U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(76U);
    msg.value = 0.823484235863;
    msg.speed_units = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.0223140901003);
    msg.setSource(47345U);
    msg.setSourceEntity(56U);
    msg.setDestination(30786U);
    msg.setDestinationEntity(198U);
    msg.value = 0.658578891417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.250691023278);
    msg.setSource(22228U);
    msg.setSourceEntity(203U);
    msg.setDestination(52253U);
    msg.setDestinationEntity(153U);
    msg.value = 0.166298969866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.45820305779);
    msg.setSource(16201U);
    msg.setSourceEntity(97U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(23U);
    msg.value = 0.369487589751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.759942227574);
    msg.setSource(6173U);
    msg.setSourceEntity(154U);
    msg.setDestination(15414U);
    msg.setDestinationEntity(156U);
    msg.value = 0.69569734319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.356167608164);
    msg.setSource(27783U);
    msg.setSourceEntity(6U);
    msg.setDestination(21612U);
    msg.setDestinationEntity(156U);
    msg.value = 0.616748479509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.107789520335);
    msg.setSource(12779U);
    msg.setSourceEntity(209U);
    msg.setDestination(57806U);
    msg.setDestinationEntity(122U);
    msg.value = 0.499153042921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.0953843472397);
    msg.setSource(49641U);
    msg.setSourceEntity(113U);
    msg.setDestination(30543U);
    msg.setDestinationEntity(88U);
    msg.value = 0.575332267111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.87437584355);
    msg.setSource(34744U);
    msg.setSourceEntity(36U);
    msg.setDestination(51758U);
    msg.setDestinationEntity(251U);
    msg.value = 0.793574489645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.358859757277);
    msg.setSource(17003U);
    msg.setSourceEntity(213U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(210U);
    msg.value = 0.913914383638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.378667939177);
    msg.setSource(40355U);
    msg.setSourceEntity(56U);
    msg.setDestination(23561U);
    msg.setDestinationEntity(62U);
    msg.path_ref = 1636070037U;
    msg.start_lat = 0.765461372311;
    msg.start_lon = 0.171449002389;
    msg.start_z = 0.656431929118;
    msg.start_z_units = 36U;
    msg.end_lat = 0.978610295805;
    msg.end_lon = 0.101028439127;
    msg.end_z = 0.904140982433;
    msg.end_z_units = 14U;
    msg.speed = 0.498359914417;
    msg.speed_units = 105U;
    msg.lradius = 0.126035377343;
    msg.flags = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.81041611098);
    msg.setSource(28393U);
    msg.setSourceEntity(218U);
    msg.setDestination(54800U);
    msg.setDestinationEntity(109U);
    msg.path_ref = 2485124499U;
    msg.start_lat = 0.175685156595;
    msg.start_lon = 0.417404299831;
    msg.start_z = 0.480517774322;
    msg.start_z_units = 43U;
    msg.end_lat = 0.798258755067;
    msg.end_lon = 0.176435527146;
    msg.end_z = 0.231583066204;
    msg.end_z_units = 151U;
    msg.speed = 0.253313979647;
    msg.speed_units = 176U;
    msg.lradius = 0.524929883648;
    msg.flags = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.727881292421);
    msg.setSource(15837U);
    msg.setSourceEntity(148U);
    msg.setDestination(44877U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 3193713315U;
    msg.start_lat = 0.620113898213;
    msg.start_lon = 0.871167946568;
    msg.start_z = 0.772224824945;
    msg.start_z_units = 20U;
    msg.end_lat = 0.592500450669;
    msg.end_lon = 0.225017165364;
    msg.end_z = 0.590859724097;
    msg.end_z_units = 21U;
    msg.speed = 0.659009271826;
    msg.speed_units = 239U;
    msg.lradius = 0.0159887859267;
    msg.flags = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.330330356014);
    msg.setSource(28103U);
    msg.setSourceEntity(240U);
    msg.setDestination(64252U);
    msg.setDestinationEntity(172U);
    msg.x = 0.871202159114;
    msg.y = 0.997678413061;
    msg.z = 0.170716456578;
    msg.k = 0.366283317744;
    msg.m = 0.21904047541;
    msg.n = 0.782482536278;
    msg.flags = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.126639917728);
    msg.setSource(51792U);
    msg.setSourceEntity(149U);
    msg.setDestination(42667U);
    msg.setDestinationEntity(92U);
    msg.x = 0.783915390137;
    msg.y = 0.287891996349;
    msg.z = 0.835820800922;
    msg.k = 0.0620688730303;
    msg.m = 0.615734154533;
    msg.n = 0.673089240337;
    msg.flags = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.38125798448);
    msg.setSource(23486U);
    msg.setSourceEntity(238U);
    msg.setDestination(46251U);
    msg.setDestinationEntity(102U);
    msg.x = 0.432511795719;
    msg.y = 0.921464986584;
    msg.z = 0.886604786388;
    msg.k = 0.89797185345;
    msg.m = 0.0950882222407;
    msg.n = 0.996375610401;
    msg.flags = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.990923158665);
    msg.setSource(58284U);
    msg.setSourceEntity(120U);
    msg.setDestination(59858U);
    msg.setDestinationEntity(226U);
    msg.value = 0.747746644241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.760841871971);
    msg.setSource(64743U);
    msg.setSourceEntity(24U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(160U);
    msg.value = 0.381684710909;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.27138516653);
    msg.setSource(43133U);
    msg.setSourceEntity(218U);
    msg.setDestination(21113U);
    msg.setDestinationEntity(70U);
    msg.value = 0.71893863564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.567605816227);
    msg.setSource(931U);
    msg.setSourceEntity(99U);
    msg.setDestination(6128U);
    msg.setDestinationEntity(51U);
    msg.u = 0.933773933738;
    msg.v = 0.597515408742;
    msg.w = 0.780626373251;
    msg.p = 0.464839348142;
    msg.q = 0.940589537264;
    msg.r = 0.0381374953146;
    msg.flags = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.693771962362);
    msg.setSource(46749U);
    msg.setSourceEntity(150U);
    msg.setDestination(9580U);
    msg.setDestinationEntity(147U);
    msg.u = 0.92177803401;
    msg.v = 0.241652988539;
    msg.w = 0.866344084083;
    msg.p = 0.678217125289;
    msg.q = 0.866660082257;
    msg.r = 0.877742109956;
    msg.flags = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.0970336635208);
    msg.setSource(12179U);
    msg.setSourceEntity(111U);
    msg.setDestination(5254U);
    msg.setDestinationEntity(39U);
    msg.u = 0.0628297229433;
    msg.v = 0.683686621605;
    msg.w = 0.292931466628;
    msg.p = 0.797869070339;
    msg.q = 0.538132320239;
    msg.r = 0.958588037542;
    msg.flags = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.848293153248);
    msg.setSource(6596U);
    msg.setSourceEntity(87U);
    msg.setDestination(31634U);
    msg.setDestinationEntity(84U);
    msg.path_ref = 2260037548U;
    msg.start_lat = 0.461741574465;
    msg.start_lon = 0.992720565651;
    msg.start_z = 0.795368617296;
    msg.start_z_units = 9U;
    msg.end_lat = 0.511164396459;
    msg.end_lon = 0.410614223299;
    msg.end_z = 0.933624487277;
    msg.end_z_units = 217U;
    msg.lradius = 0.447857770427;
    msg.flags = 28U;
    msg.x = 0.711938058654;
    msg.y = 0.90782591748;
    msg.z = 0.114810942898;
    msg.vx = 0.274619325352;
    msg.vy = 0.0755524976943;
    msg.vz = 0.0185355081651;
    msg.course_error = 0.843962267594;
    msg.eta = 5758U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.813373211799);
    msg.setSource(43135U);
    msg.setSourceEntity(105U);
    msg.setDestination(20899U);
    msg.setDestinationEntity(129U);
    msg.path_ref = 1535261841U;
    msg.start_lat = 0.409612523019;
    msg.start_lon = 0.818620667536;
    msg.start_z = 0.839391236638;
    msg.start_z_units = 139U;
    msg.end_lat = 0.0286905149146;
    msg.end_lon = 0.00405335231033;
    msg.end_z = 0.137242302931;
    msg.end_z_units = 7U;
    msg.lradius = 0.999449068636;
    msg.flags = 101U;
    msg.x = 0.265415741043;
    msg.y = 0.987787889596;
    msg.z = 0.0808568628848;
    msg.vx = 0.700233938879;
    msg.vy = 0.163837944266;
    msg.vz = 0.117928179143;
    msg.course_error = 0.0119989211875;
    msg.eta = 24107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.284612925845);
    msg.setSource(4792U);
    msg.setSourceEntity(212U);
    msg.setDestination(39351U);
    msg.setDestinationEntity(112U);
    msg.path_ref = 4207414564U;
    msg.start_lat = 0.495343465342;
    msg.start_lon = 0.850941069987;
    msg.start_z = 0.26453065625;
    msg.start_z_units = 225U;
    msg.end_lat = 0.501610685094;
    msg.end_lon = 0.508264915203;
    msg.end_z = 0.388558739108;
    msg.end_z_units = 25U;
    msg.lradius = 0.112470515733;
    msg.flags = 68U;
    msg.x = 0.653544973934;
    msg.y = 0.390117744337;
    msg.z = 0.60282779965;
    msg.vx = 0.0011879344392;
    msg.vy = 0.758054222189;
    msg.vz = 0.98507268428;
    msg.course_error = 0.620793815684;
    msg.eta = 19052U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.390891057098);
    msg.setSource(35152U);
    msg.setSourceEntity(84U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(130U);
    msg.k = 0.850561394049;
    msg.m = 0.411550187834;
    msg.n = 0.873985018112;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.774170471541);
    msg.setSource(20299U);
    msg.setSourceEntity(222U);
    msg.setDestination(24331U);
    msg.setDestinationEntity(175U);
    msg.k = 0.45251490657;
    msg.m = 0.20025126177;
    msg.n = 0.310554879367;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.498561886407);
    msg.setSource(62396U);
    msg.setSourceEntity(30U);
    msg.setDestination(60264U);
    msg.setDestinationEntity(227U);
    msg.k = 0.640339205858;
    msg.m = 0.075910920264;
    msg.n = 0.615750473469;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.821052450277);
    msg.setSource(7780U);
    msg.setSourceEntity(226U);
    msg.setDestination(42144U);
    msg.setDestinationEntity(111U);
    msg.p = 0.684063707972;
    msg.i = 0.399274883589;
    msg.d = 0.479817104956;
    msg.a = 0.00498788468773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.307063308687);
    msg.setSource(2431U);
    msg.setSourceEntity(201U);
    msg.setDestination(5343U);
    msg.setDestinationEntity(127U);
    msg.p = 0.0999077983146;
    msg.i = 0.547799666629;
    msg.d = 0.704882728613;
    msg.a = 0.779687057036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.693663185396);
    msg.setSource(16336U);
    msg.setSourceEntity(111U);
    msg.setDestination(45850U);
    msg.setDestinationEntity(106U);
    msg.p = 0.856408425997;
    msg.i = 0.76104014774;
    msg.d = 0.72863508007;
    msg.a = 0.0229737171784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.355561946782);
    msg.setSource(17094U);
    msg.setSourceEntity(157U);
    msg.setDestination(32703U);
    msg.setDestinationEntity(168U);
    msg.op = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.341811024849);
    msg.setSource(59335U);
    msg.setSourceEntity(99U);
    msg.setDestination(48731U);
    msg.setDestinationEntity(110U);
    msg.op = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.956319121909);
    msg.setSource(64476U);
    msg.setSourceEntity(105U);
    msg.setDestination(5964U);
    msg.setDestinationEntity(25U);
    msg.op = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.941508635125);
    msg.setSource(13319U);
    msg.setSourceEntity(101U);
    msg.setDestination(18092U);
    msg.setDestinationEntity(124U);
    msg.timeout = 56265U;
    msg.lat = 0.249133559401;
    msg.lon = 0.368800943603;
    msg.z = 0.0980717281332;
    msg.z_units = 228U;
    msg.speed = 0.212192551855;
    msg.speed_units = 55U;
    msg.roll = 0.820310115034;
    msg.pitch = 0.787209612202;
    msg.yaw = 0.854981141738;
    msg.custom.assign("QTUBCDTRABTWSFXFOXAWYWHEKCLFJLXIDIRLVGAVNWPELBCAOPSQCTWFKPKTEYTMGDUBXBYWVRCGRLNLUCKHQUSEYQBXHUQFKNDSKOGQMJWGPESETIYDTMGBEHYZIOMBNHHKVQZHMNRXEJAJSKHIWTUAIELZMFGAPZYOXMWUXJZOAZKJZYOASDNUZHQMPDYSCRCCJKRNJPIPLVPDXRVVWDMYGENQO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.501529644929);
    msg.setSource(3603U);
    msg.setSourceEntity(127U);
    msg.setDestination(19965U);
    msg.setDestinationEntity(92U);
    msg.timeout = 38530U;
    msg.lat = 0.499632091356;
    msg.lon = 0.768100442564;
    msg.z = 0.252919177549;
    msg.z_units = 238U;
    msg.speed = 0.979781519606;
    msg.speed_units = 10U;
    msg.roll = 0.46315679018;
    msg.pitch = 0.767152414346;
    msg.yaw = 0.153050452621;
    msg.custom.assign("WLSCSPWWEVHKIAZZBMAOVTBSYBFIRIHZUEKMTFHQASBTTHHGRSTVJQFJGZGRKKAYQTOSPVDNGOCSNXOIDROAUQMNCEBEQAOYYVXMWJDDPXANYKJMZCJEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.340150898159);
    msg.setSource(38243U);
    msg.setSourceEntity(230U);
    msg.setDestination(49116U);
    msg.setDestinationEntity(101U);
    msg.timeout = 49288U;
    msg.lat = 0.667492647898;
    msg.lon = 0.612263713735;
    msg.z = 0.476126003952;
    msg.z_units = 215U;
    msg.speed = 0.95801742602;
    msg.speed_units = 196U;
    msg.roll = 0.732412433906;
    msg.pitch = 0.798488027787;
    msg.yaw = 0.338144568363;
    msg.custom.assign("GIANOIGYBKLFCXJRZDQUOQZMYPQQKGSORXTAAEYJYVYJVTZIVVSTJEMNWDAWQIPQAMOLHHFNIMUUEUTBEDXLMCPSMIKHKGJCWQTWLRKYVUYAPUKONXOQZQHZDYDRHPOBGSWNMJTVXHTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.978806347826);
    msg.setSource(56299U);
    msg.setSourceEntity(102U);
    msg.setDestination(36986U);
    msg.setDestinationEntity(83U);
    msg.timeout = 36383U;
    msg.lat = 0.269040104177;
    msg.lon = 0.0599089580439;
    msg.z = 0.00916360402839;
    msg.z_units = 41U;
    msg.speed = 0.361122133304;
    msg.speed_units = 180U;
    msg.duration = 26018U;
    msg.radius = 0.389295221176;
    msg.flags = 93U;
    msg.custom.assign("TZLMCFKMAUMTNWYKCJWXJFGCWCZUOSOTRSSBMRLHEPCIGQIHUMSLBPXZDSTXWPFUILEDLDYYRNEHEXHSHHPXTDVGVNEPJEUQFIQKAZIURTZOIDZHOKDLGWZHAOIAKCVINNNZDLYNQFDXQQPKYQJMUYCLPDEYPEGABWSQBTQYJOSLPFFQOHCNEVGFBVWBKXUVIOGAKBKVBORJXTVWIJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.303911189506);
    msg.setSource(27931U);
    msg.setSourceEntity(44U);
    msg.setDestination(27040U);
    msg.setDestinationEntity(112U);
    msg.timeout = 26250U;
    msg.lat = 0.41358999948;
    msg.lon = 0.122258085409;
    msg.z = 0.64882259016;
    msg.z_units = 169U;
    msg.speed = 0.348078763507;
    msg.speed_units = 108U;
    msg.duration = 49397U;
    msg.radius = 0.694202295593;
    msg.flags = 121U;
    msg.custom.assign("QQIXNRBIAQFOAMOKBUGMNJCJWBYNIQNCOWYXVAVWRVZUPHUCRAAUKDDQSZFKNKMEGYXLXTN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.298598568087);
    msg.setSource(7259U);
    msg.setSourceEntity(65U);
    msg.setDestination(43651U);
    msg.setDestinationEntity(106U);
    msg.timeout = 18854U;
    msg.lat = 0.69464473525;
    msg.lon = 0.0250823525126;
    msg.z = 0.0812372955363;
    msg.z_units = 32U;
    msg.speed = 0.0623695025273;
    msg.speed_units = 63U;
    msg.duration = 31646U;
    msg.radius = 0.630987816704;
    msg.flags = 33U;
    msg.custom.assign("HWRMAGTORGWDIVTHECGLWPOXTUPPRWUBMDEESYGJZPXDCSGKJLZGJOAMMCCRQQZHYNRDZBJFLKCKOKXUSJSULSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.720666957333);
    msg.setSource(39812U);
    msg.setSourceEntity(145U);
    msg.setDestination(50505U);
    msg.setDestinationEntity(31U);
    msg.custom.assign("FXYTQAPUQDNCNVSAFKWBEPNROJLPNBWAPFKTYZVLXBIIYFJWOBIZCHFSVBQYJLTMZTJSGEOTGGIXTBXGILAXGDXWMZVAFCNBUHJCMSCUSDYCJANUICDENDROQWMFWQGCRWRWSCDIMRVREFMDNMZURDGPSYVGKTPXZBKHLRJOXOBKHUQXTUAAPJKYILQVJLLKREQHCZEOPMSEZYGYLDGVENSOSQMFEUKTZWXAEDMOHAPVRNHITQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.864884719824);
    msg.setSource(16136U);
    msg.setSourceEntity(136U);
    msg.setDestination(3704U);
    msg.setDestinationEntity(6U);
    msg.custom.assign("XOWSDGBZRLDYMQURJZQPYOWZXGLTWCZIFTBGDTZYJGBZSAJMXFCNSVMWPWLEVTHZEUAVKPAHZYLYMUXWYBSUVIFOUMOUKBCFQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.650862777498);
    msg.setSource(13404U);
    msg.setSourceEntity(4U);
    msg.setDestination(32198U);
    msg.setDestinationEntity(238U);
    msg.custom.assign("YOXUXTCKKVLTIHJGBLBMLAZYKOXVKQFQDXPOFTRVNGNVIJSFHUMMMOWWDIBZJGEQGYMRDAYNRVPJLHCNMBTZHGZBYTDDRVTTOPWYYZEFSKSWCGBTCSINAXQVMDFCWJQEZLIHRWJQMGQPZKIIFHHJLDWXWOPCPDERBCAARDZEYGPXIPBBACAKESIEQHRUVQTUOXUSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.474998546542);
    msg.setSource(46385U);
    msg.setSourceEntity(91U);
    msg.setDestination(46317U);
    msg.setDestinationEntity(106U);
    msg.timeout = 3620U;
    msg.lat = 0.897362416606;
    msg.lon = 0.703821306746;
    msg.z = 0.423803435054;
    msg.z_units = 220U;
    msg.duration = 26029U;
    msg.speed = 0.652681861876;
    msg.speed_units = 53U;
    msg.type = 100U;
    msg.radius = 0.260403512126;
    msg.length = 0.179962626517;
    msg.bearing = 0.956659096935;
    msg.direction = 214U;
    msg.custom.assign("PQSIYDNFIETJBLTZUJHQYMFECMQBJOOETYZPGRLEDDSXHAQFSBYZDZPTZNGCFAZGMJQCTQEZPWCXJACIKXOVXVSKULEWRIGJRFVRYVTUOXAIYQAHDOBPAWKWTCDOJEEGRWRALWIVFBUSYORIFKMLJZCLRYEKOEDMQPFNRHXCHHSKMLN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.50601456051);
    msg.setSource(54364U);
    msg.setSourceEntity(203U);
    msg.setDestination(5785U);
    msg.setDestinationEntity(237U);
    msg.timeout = 28556U;
    msg.lat = 0.393038624796;
    msg.lon = 0.796062083451;
    msg.z = 0.0471166469406;
    msg.z_units = 49U;
    msg.duration = 12051U;
    msg.speed = 0.368213448188;
    msg.speed_units = 134U;
    msg.type = 166U;
    msg.radius = 0.513761737326;
    msg.length = 0.995739026775;
    msg.bearing = 0.166756518596;
    msg.direction = 138U;
    msg.custom.assign("ABZKRWZBHWUZQDNWVTZSTFLHICRPMAXYTPKOCIQELQPVABFWASHXPMSULNYFMVXWHSAQFVRNDGCQMEIRUZUTFBKIKBYWBMGWUPJROMCTWOPXYECSAXGZPNURVSDNAIZPSXVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.129547947497);
    msg.setSource(29042U);
    msg.setSourceEntity(5U);
    msg.setDestination(45524U);
    msg.setDestinationEntity(128U);
    msg.timeout = 48868U;
    msg.lat = 0.310332730175;
    msg.lon = 0.271139384643;
    msg.z = 0.992060576041;
    msg.z_units = 64U;
    msg.duration = 653U;
    msg.speed = 0.297401845868;
    msg.speed_units = 72U;
    msg.type = 165U;
    msg.radius = 0.692746185865;
    msg.length = 0.745053795042;
    msg.bearing = 0.71815745375;
    msg.direction = 10U;
    msg.custom.assign("SZLOQNWZIEMUJINXMIIWQGCPPZSURJWFFRBJELEOHUAANCBKHEXUCIFDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.856609708293);
    msg.setSource(59717U);
    msg.setSourceEntity(186U);
    msg.setDestination(8654U);
    msg.setDestinationEntity(186U);
    msg.duration = 25798U;
    msg.custom.assign("QDMYLDAOEUZOISBNTUONDYYWBCUTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.939384259909);
    msg.setSource(49545U);
    msg.setSourceEntity(163U);
    msg.setDestination(17246U);
    msg.setDestinationEntity(129U);
    msg.duration = 5245U;
    msg.custom.assign("YHWGHOROQWXPUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.399515899439);
    msg.setSource(37163U);
    msg.setSourceEntity(253U);
    msg.setDestination(16785U);
    msg.setDestinationEntity(1U);
    msg.duration = 17619U;
    msg.custom.assign("COBLNIVPXNMOSDFAKASNDCEWIHVFVITTOXGPJBRAICNOPGHIYSDGUBEUZFWTMQETSQJVRULBRIVYSMGUIJPLCFCGODWALDDVEQPFQPDCBUWOMMKOYQSURIYKDMHHERRSXMIBYGALUMXXWFYTRFWNPNXOKBJSEABTPTWBLHRZXUJUDCNZAXNGFQZNNYJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.863133706282);
    msg.setSource(4206U);
    msg.setSourceEntity(26U);
    msg.setDestination(11572U);
    msg.setDestinationEntity(126U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4144147297U;
    tmp_msg_0.start_lat = 0.438522203422;
    tmp_msg_0.start_lon = 0.77846829602;
    tmp_msg_0.start_z = 0.860462044059;
    tmp_msg_0.start_z_units = 251U;
    tmp_msg_0.end_lat = 0.419418856178;
    tmp_msg_0.end_lon = 0.326131161042;
    tmp_msg_0.end_z = 0.252838618122;
    tmp_msg_0.end_z_units = 51U;
    tmp_msg_0.speed = 0.590398299797;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.lradius = 0.473797064795;
    tmp_msg_0.flags = 122U;
    msg.control.set(tmp_msg_0);
    msg.duration = 22259U;
    msg.custom.assign("DGUFNPGZOSXKYVHRRZBLCORYQWRNTIMOKDAVZLJPAMPTIJGHSVTBJDWZVCBJSOFPPYLTHDCFQLWWSWNVIXMOFBNUBWXYYUIYXDSCTAELSDEKXUWFGEIQMLHYNPMRWDKGZEPBAKTMGZMZNQIMJPHXHJSGTHABJIKFDISEINADZRLXMPUAXCEEQVUXCOFBHVESE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.330652661127);
    msg.setSource(32522U);
    msg.setSourceEntity(229U);
    msg.setDestination(38187U);
    msg.setDestinationEntity(105U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0385655469054;
    msg.control.set(tmp_msg_0);
    msg.duration = 17269U;
    msg.custom.assign("HVYDMOUYFNQMWIRMJIJIKJAIBGFPZVYNLEEVWJLDUWJQLGTCJGMNSOKZOMREXYCUQHEKCHNOHYXOYCPXHOUWFIDRYMSPJDJGBLKIXRBWVCOCHGLSSDBKGAAKJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.858639348204);
    msg.setSource(21553U);
    msg.setSourceEntity(10U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(109U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.9964977197;
    msg.control.set(tmp_msg_0);
    msg.duration = 58167U;
    msg.custom.assign("VFQSKQDISOENEZARPSZLPUITNLGHVABLJBFCZCGDAPWWNCCZGMMOGLOEJHIBLJDVNQMXXXTADTXRDQOPDMWHFFAQEYWGWHUKFTRVYBFIQOYJSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.979414790199);
    msg.setSource(10324U);
    msg.setSourceEntity(63U);
    msg.setDestination(51333U);
    msg.setDestinationEntity(232U);
    msg.timeout = 2020U;
    msg.lat = 0.0524146727555;
    msg.lon = 0.1142429444;
    msg.z = 0.514814810252;
    msg.z_units = 58U;
    msg.speed = 0.0207560241777;
    msg.speed_units = 178U;
    msg.bearing = 0.755763268651;
    msg.cross_angle = 0.456352828322;
    msg.width = 0.742460227341;
    msg.length = 0.168058682934;
    msg.hstep = 0.0398157723949;
    msg.coff = 108U;
    msg.alternation = 16U;
    msg.flags = 105U;
    msg.custom.assign("HUCKLMQVCOAVWANBCBZLFJRLQYPDQRAYFGIETZXFMXFLZMPGOXRYRVCOKQMREYPJBKTFYCENUGSWMGDQVZIICVNODKJXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.876583657799);
    msg.setSource(61673U);
    msg.setSourceEntity(55U);
    msg.setDestination(19696U);
    msg.setDestinationEntity(181U);
    msg.timeout = 38438U;
    msg.lat = 0.00319530330537;
    msg.lon = 0.745449553613;
    msg.z = 0.418471583574;
    msg.z_units = 239U;
    msg.speed = 0.38271624353;
    msg.speed_units = 119U;
    msg.bearing = 0.362130151471;
    msg.cross_angle = 0.307343433108;
    msg.width = 0.982850686177;
    msg.length = 0.0735342785272;
    msg.hstep = 0.812492561754;
    msg.coff = 16U;
    msg.alternation = 219U;
    msg.flags = 211U;
    msg.custom.assign("DMVOPVLANKDDEYHCYFAYNLUWKSLOWSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.436003626864);
    msg.setSource(53203U);
    msg.setSourceEntity(225U);
    msg.setDestination(31362U);
    msg.setDestinationEntity(218U);
    msg.timeout = 64225U;
    msg.lat = 0.520737628238;
    msg.lon = 0.834580439629;
    msg.z = 0.0905367636617;
    msg.z_units = 237U;
    msg.speed = 0.850088281944;
    msg.speed_units = 96U;
    msg.bearing = 0.232221891459;
    msg.cross_angle = 0.876287011051;
    msg.width = 0.79909250779;
    msg.length = 0.00408661788776;
    msg.hstep = 0.335504578211;
    msg.coff = 44U;
    msg.alternation = 72U;
    msg.flags = 107U;
    msg.custom.assign("ZCZLOSMEFSVNWBXDEVGBMOMFUKAIKRHOLMPKRPHYVSUIZLVNGBBIVTZUVRRXYDJVUJBQJZNDKCMQYFECYBPKWHBOEEGGHWZEUXFSAXOXTWYUQEDGUINNGFNMHQQTSTQTUGYVAVRIXZPXPCLAEZMGLMFGXHTDLYTJCWBYJRSJIQHPPKHFWULIFILNJSSNQDDAXRIRKDHMQACOPEZNVYCJLWCOTCUWASFFTCHWQRKWYZGPJDT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.516402760384);
    msg.setSource(35669U);
    msg.setSourceEntity(96U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(212U);
    msg.timeout = 64641U;
    msg.lat = 0.558873911675;
    msg.lon = 0.847211287857;
    msg.z = 0.875196008917;
    msg.z_units = 194U;
    msg.speed = 0.837721118701;
    msg.speed_units = 20U;
    msg.custom.assign("LNCSYBBCHTLNUZWUJVHIVZLLKEHPBTOWJBIEEUGBGTJMAKQKHMFOVCCVNFKWZKYDTFNSNKUTASVQKVIDSZVWGIXECUMSRGRFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.712273053677);
    msg.setSource(44581U);
    msg.setSourceEntity(0U);
    msg.setDestination(57239U);
    msg.setDestinationEntity(147U);
    msg.timeout = 35774U;
    msg.lat = 0.157320959343;
    msg.lon = 0.086450858815;
    msg.z = 0.606531377399;
    msg.z_units = 33U;
    msg.speed = 0.881640217503;
    msg.speed_units = 201U;
    msg.custom.assign("AUCKOJKMCCAEQWWGFYPVUPGELIJEMKQIPDIXKDMGDVNWNGTIMEHSSPFVQJNXGBYHSDGGYWHOFNDLQUTOJYXJBQLZXUIOKACVRQLADMTWFSPSXZZRMBLSIYJJLKWXFJXZQBFOVOSVDRERSKWVCENRCYSGKJFEUVKKQOMNDNAAHRZEWVXHNOZHIBEQAFBWPDYD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.904276974779);
    msg.setSource(955U);
    msg.setSourceEntity(149U);
    msg.setDestination(38074U);
    msg.setDestinationEntity(185U);
    msg.timeout = 62480U;
    msg.lat = 0.748579483404;
    msg.lon = 0.0187147794437;
    msg.z = 0.446038570768;
    msg.z_units = 221U;
    msg.speed = 0.152218655719;
    msg.speed_units = 222U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.472413832852;
    tmp_msg_0.y = 0.383645869727;
    tmp_msg_0.z = 0.608112562624;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LBWPYNEMXRXCTWKEVWWLADSJQQHYBFFSHKUOTJVNNAZACLSPFFCRXINWNVZFNOFQKHQWRTMMGSCVLQKKEXRNAPIKSMMGGNIGZDIMFHYJLPUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.150898401289);
    msg.setSource(57732U);
    msg.setSourceEntity(114U);
    msg.setDestination(30045U);
    msg.setDestinationEntity(61U);
    msg.x = 0.959759484211;
    msg.y = 0.696021818383;
    msg.z = 0.132363459017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.486465078411);
    msg.setSource(6019U);
    msg.setSourceEntity(56U);
    msg.setDestination(59535U);
    msg.setDestinationEntity(61U);
    msg.x = 0.968193996451;
    msg.y = 0.136518321701;
    msg.z = 0.605127337143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.685933826681);
    msg.setSource(46684U);
    msg.setSourceEntity(122U);
    msg.setDestination(44648U);
    msg.setDestinationEntity(159U);
    msg.x = 0.303992528415;
    msg.y = 0.553330636427;
    msg.z = 0.503553339964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.315362422077);
    msg.setSource(40638U);
    msg.setSourceEntity(142U);
    msg.setDestination(33217U);
    msg.setDestinationEntity(123U);
    msg.timeout = 58625U;
    msg.lat = 0.0748805616478;
    msg.lon = 0.0941979557783;
    msg.z = 0.420013255457;
    msg.z_units = 68U;
    msg.amplitude = 0.967583150442;
    msg.pitch = 0.639287524929;
    msg.speed = 0.644670182914;
    msg.speed_units = 30U;
    msg.custom.assign("OHAUULECYIFAAQVYEQRKIQGMSMRDWUMRBZDTDLYSHFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.0969590080018);
    msg.setSource(5875U);
    msg.setSourceEntity(242U);
    msg.setDestination(58969U);
    msg.setDestinationEntity(243U);
    msg.timeout = 59123U;
    msg.lat = 0.321722918317;
    msg.lon = 0.599396211517;
    msg.z = 0.898418528184;
    msg.z_units = 114U;
    msg.amplitude = 0.629120416346;
    msg.pitch = 0.2587113838;
    msg.speed = 0.457778055635;
    msg.speed_units = 23U;
    msg.custom.assign("ZTCLQMVGFFEIXIUJQCTEPAHJGVZJWBCNLHWGEOPDWOVUKWBPZKMNVOWJUSJBXZVXJUQXNRGFACUCWVHMHMNDZSLUESDPYCMTOLFIGNQXFLEIKQDYSLPGWFJMNAGYTELAPCRKTYOHTUKYFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.966518453899);
    msg.setSource(317U);
    msg.setSourceEntity(49U);
    msg.setDestination(823U);
    msg.setDestinationEntity(25U);
    msg.timeout = 24958U;
    msg.lat = 0.104256719521;
    msg.lon = 0.898849014017;
    msg.z = 0.798111640716;
    msg.z_units = 79U;
    msg.amplitude = 0.573426086775;
    msg.pitch = 0.797426319404;
    msg.speed = 0.940627083102;
    msg.speed_units = 190U;
    msg.custom.assign("FNLJHIYTPCIEXHVBUPPFFGWZLQMXQQRXJDJRKTVXKAUIAYHWGTFTAWONVVMYLUEEFUJYMTOXYVLUPWAJCMSJVWDZFFQUENPGXHXHICRYOIJCUTRFHPPACGZRZYDAVSERANKUBHBMDEOSDPNZGKDOIBWULNVAEOMZCGISQNIQXPGTLDDBZAYNRZZKKDRYCWJZSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.00886300864012);
    msg.setSource(49206U);
    msg.setSourceEntity(219U);
    msg.setDestination(9291U);
    msg.setDestinationEntity(230U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.846259931463);
    msg.setSource(18822U);
    msg.setSourceEntity(191U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(110U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.597527822712);
    msg.setSource(61095U);
    msg.setSourceEntity(50U);
    msg.setDestination(5644U);
    msg.setDestinationEntity(169U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.740280508085);
    msg.setSource(2000U);
    msg.setSourceEntity(119U);
    msg.setDestination(8217U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.80622711773;
    msg.lon = 0.32116958887;
    msg.z = 0.28839891911;
    msg.z_units = 20U;
    msg.radius = 0.727880529727;
    msg.duration = 28605U;
    msg.speed = 0.00685488462751;
    msg.speed_units = 60U;
    msg.custom.assign("UJHDWEHAWQVQLQNVKWNMSFHANMYCYONCULSDBNZQLUENIPJGADBGXJMGYWIFKLGYERWJAUMXQMQSARIJQZRYGKJQDIVOGBNBCAIEIZKIPPFPRKXEWZCZUQGLXXFRFPHLVBFOSKLTCICQGENTSEMMCCRTUOBYRCBTYVOJPTZZPGZOHVWDJRVMBSRJUFAFYABXDFTUTBKZKYEHIWEHUSXHDRTVSOZTUNSDHXWYVXOWKMCPLOFISELOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.142167670299);
    msg.setSource(10390U);
    msg.setSourceEntity(237U);
    msg.setDestination(6517U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.345011160051;
    msg.lon = 0.322825631225;
    msg.z = 0.888272140304;
    msg.z_units = 121U;
    msg.radius = 0.198870464151;
    msg.duration = 48657U;
    msg.speed = 0.350582390842;
    msg.speed_units = 119U;
    msg.custom.assign("LFHJEBXRFPKTUGFKSYJCADDYGPZRUUONEENCYAXBVPTDOMETLTSNPQYNCQEHVRULQAONLGFHMEIUAJYOWQOXSUWGZVJYFPKXAZHMYHBHLALJHSWVQBCTEMRFKLNGIUYMGJPSRPPNWJBOBMSVRZBALCWYMZUIBRXYSTDIIWQHDTQEAKAFDZRDDGZUMKCKVMNIWOJTEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.622661336229);
    msg.setSource(10703U);
    msg.setSourceEntity(107U);
    msg.setDestination(56196U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.029056953828;
    msg.lon = 0.544145139307;
    msg.z = 0.370908173274;
    msg.z_units = 77U;
    msg.radius = 0.505925378093;
    msg.duration = 28001U;
    msg.speed = 0.140522826124;
    msg.speed_units = 4U;
    msg.custom.assign("BBSDSZSIKZYJTPDRGBUOCSLSYUXTIILMHQZTLDXIEJNOEUGYPOYSQKKNKXAEGNYWCVLEVNATODIFYBYQPUIOLFTBKUDVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.889435429762);
    msg.setSource(104U);
    msg.setSourceEntity(143U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(67U);
    msg.timeout = 1113U;
    msg.flags = 87U;
    msg.lat = 0.337198154285;
    msg.lon = 0.668854471945;
    msg.start_z = 0.50561295486;
    msg.start_z_units = 150U;
    msg.end_z = 0.41932211672;
    msg.end_z_units = 95U;
    msg.radius = 0.116904435677;
    msg.speed = 0.994447973385;
    msg.speed_units = 240U;
    msg.custom.assign("YQGNMOZOUHOQYOMAVDBLRZWZFKEOBEUBPKQUQVNJPTHRSSJDGKVUSVDWFWGZCGAAGOTBCLPPNTQJDAOVYCEMWTNIJWLIJWMQGAUHVKCMLJBKRWLZURKFLLPXSIUDZNSAHBSGZIEBDVPTBXYTYAHSTSOCRANSMPFUWIXMZZPRNHJFXYWEGODMDFLPHXATQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.530393074313);
    msg.setSource(19128U);
    msg.setSourceEntity(243U);
    msg.setDestination(76U);
    msg.setDestinationEntity(240U);
    msg.timeout = 52344U;
    msg.flags = 164U;
    msg.lat = 0.234443593253;
    msg.lon = 0.401695303357;
    msg.start_z = 0.512321722383;
    msg.start_z_units = 44U;
    msg.end_z = 0.847397833843;
    msg.end_z_units = 220U;
    msg.radius = 0.033248329226;
    msg.speed = 0.211139356183;
    msg.speed_units = 13U;
    msg.custom.assign("PDMDOXQSUWOGESARUVJIHQDCEXEJITHGLYQOJAEMQNHHJXOLVIKEFXAPSLSZFKSWCXLEQMZIRIRYNDTASANTQXDJWVPEPWCOJLZENKGMTCUFPDPIQVOUNGWKRRDEGFFVAVKZFVMTMTHCUVZBPCOIODZYZPMBXUNYHZBGQGXIDJHCVSRYYJNNBLXIMALSRRPKFHNELABZWHTFNKFIUGCVBXKHBYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.288058733721);
    msg.setSource(1061U);
    msg.setSourceEntity(131U);
    msg.setDestination(46962U);
    msg.setDestinationEntity(183U);
    msg.timeout = 21036U;
    msg.flags = 38U;
    msg.lat = 0.603515476988;
    msg.lon = 0.196301999307;
    msg.start_z = 0.995658894952;
    msg.start_z_units = 82U;
    msg.end_z = 0.912188096543;
    msg.end_z_units = 23U;
    msg.radius = 0.633074911251;
    msg.speed = 0.384393954992;
    msg.speed_units = 157U;
    msg.custom.assign("YCFZPBBSEVCMUGHLENKRHDFIDETSDUOWMJEVQOWUXUUZMMDBPMKNRQIYGSAOVSQGPYNHUMWBVYVANORDYZTETQJPBALSFBVLILIFONHIURZXRLUHCBATFNBOGIWWZRHCAXHAWKZFQBLKSEMOLACONEFAKPDGXJJQILXZSNOGGHXWXDTTYJKZJGWYPDCTEPFMDTKYIXSCYXIHQAERGTCIMPZQLROJLTVVGMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.843410213689);
    msg.setSource(7481U);
    msg.setSourceEntity(177U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(125U);
    msg.timeout = 16578U;
    msg.lat = 0.534029774682;
    msg.lon = 0.879001275967;
    msg.z = 0.320609386655;
    msg.z_units = 1U;
    msg.speed = 0.661972598626;
    msg.speed_units = 94U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.676599098018;
    tmp_msg_0.y = 0.650621242989;
    tmp_msg_0.z = 0.576452420401;
    tmp_msg_0.t = 0.0212731940847;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("THPGDUPLENQEFQYZVGMBBBAWTYTLNQVZMPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.106346189995);
    msg.setSource(30103U);
    msg.setSourceEntity(80U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(20U);
    msg.timeout = 63197U;
    msg.lat = 0.776721994633;
    msg.lon = 0.196958748321;
    msg.z = 0.747050837617;
    msg.z_units = 20U;
    msg.speed = 0.665704583918;
    msg.speed_units = 222U;
    msg.custom.assign("KQYHJBFXQELTQAXTBPWXZVUECVEDSCTPNSSABZZIMWCSUPVUEOQTIYTKUHWZPCFWQJNAVGNCEFPKRXUPDRTJGLVKLXVSIUFWYJXFAKGMNBMXVRNWBAPSENRYOPOREAJFEDUWLCRXJKWMTFQNG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.567165568075);
    msg.setSource(34282U);
    msg.setSourceEntity(106U);
    msg.setDestination(25222U);
    msg.setDestinationEntity(236U);
    msg.timeout = 36910U;
    msg.lat = 0.577172601283;
    msg.lon = 0.308740150175;
    msg.z = 0.251688447986;
    msg.z_units = 63U;
    msg.speed = 0.157835598384;
    msg.speed_units = 222U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.184789917318;
    tmp_msg_0.y = 0.0846855348101;
    tmp_msg_0.z = 0.0854038361895;
    tmp_msg_0.t = 0.835551723296;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WVOBGIWRNUTNLQCIPOUYJDXKMUNKIIOUSHBHICVAPJLQDCNQQRAXXETRXJVDSGYGUMXEQPXHBWQLFTFMWLFNGVGKFNCZZKJISLNYKUCHWIVFSIYNTDUXIPKQXMUESLEYSJRBAAYRZVCEDSEBKPFGPCGVDVOMAZZYMWWFKVRFKKACZTDOADWYLZGTWJEHBEHWSQNTTTQXJYMOSHAZRHUETAPFCPMDGDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.456379382025);
    msg.setSource(63801U);
    msg.setSourceEntity(208U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(174U);
    msg.x = 0.602344483066;
    msg.y = 0.554037190211;
    msg.z = 0.669132167499;
    msg.t = 0.507349200633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.727169600718);
    msg.setSource(12628U);
    msg.setSourceEntity(152U);
    msg.setDestination(51418U);
    msg.setDestinationEntity(117U);
    msg.x = 0.574697199741;
    msg.y = 0.585897745067;
    msg.z = 0.890087393529;
    msg.t = 0.27210565628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.85229769402);
    msg.setSource(44419U);
    msg.setSourceEntity(195U);
    msg.setDestination(26055U);
    msg.setDestinationEntity(230U);
    msg.x = 0.595223716011;
    msg.y = 0.630233968954;
    msg.z = 0.116857937365;
    msg.t = 0.274489258094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.194592684777);
    msg.setSource(57803U);
    msg.setSourceEntity(252U);
    msg.setDestination(34878U);
    msg.setDestinationEntity(16U);
    msg.timeout = 15888U;
    msg.name.assign("UALHQNZFIBEDRJNIUWFYFKOLSXDHVQPHPTZNZCEXNXOMGPTUOGQSDBRZYJXEINVCCSEPTTQWLVZAZHSTSGFMVLKCXADVTIDCTYSDGENUOPGFVKHBBBMRILLBYHPDURTGORIBAZPFNLKDUMGCREXTMEFJMLJKQNNUFOBERISASBQ");
    msg.custom.assign("EGQUVAQKCAKDOXVNPRAFLCOXDWIOYGYVBMWKTDPBZWHCJKKWOMLYBJYDATLKGJRNWQTWCNEUERPIAJJHZXMXVFQIMQTBYTQVEHPXMNIBGRSVTAEMUIZCUQNKNIJWUCGTTSGKKBFVOTMUESFBIOSLDXRNQMFGMGINHFBZZCADLDFGDVPSCESLHVAUPLOUCFERHVHCOHSBDINAEUPGJNYEWLYYZHWPJOSRXRXFUHWFKYTLSQBPZAYDQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.753331397857);
    msg.setSource(29275U);
    msg.setSourceEntity(188U);
    msg.setDestination(37137U);
    msg.setDestinationEntity(151U);
    msg.timeout = 16032U;
    msg.name.assign("GACFTMISUXIKSWTIQBUKOGUYMDHSBLSYJMHB");
    msg.custom.assign("QFVGCZBVMNJGKLSMGEZCJPBOAOCXISNAOTEZPZQODLICFKZGSMVHTSWLKQLUXTXSAPPJECNVORSSNWUQQAYAXNWDTYIGRZEMFXJHPFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.961788867198);
    msg.setSource(27005U);
    msg.setSourceEntity(207U);
    msg.setDestination(29749U);
    msg.setDestinationEntity(234U);
    msg.timeout = 14389U;
    msg.name.assign("XFBDCKIWSQOOBBNUCXTEKLGENQQINCAWFZYDNIUTCBJKLXYALZJKUYSDEOEDHZGQIMVMVRLMFEFKZNTCCZNISFAHWAUNNLSBDBII");
    msg.custom.assign("TBEZYWBHNACSVPYKITGCVQQWSNKIUMCVRRKHKXTESEAHWVAFRDUMBZPXPSWGIUOVJGADXWLYXYXKXGMHJOWNZWUOTJHDHKXMGQZVARBORNUSCGDRPPMOLYMKVMVQRTHIYMNOOJIGHRIEFQQVJSNCBTURSDQUZNAZJIZIDALQFBFYLXBOODEEQTFJPKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.921272139866);
    msg.setSource(2273U);
    msg.setSourceEntity(120U);
    msg.setDestination(20608U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.804158714342;
    msg.lon = 0.038640969944;
    msg.z = 0.544744690248;
    msg.z_units = 231U;
    msg.speed = 0.254501224431;
    msg.speed_units = 132U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.982468519264;
    tmp_msg_0.y = 0.393111138336;
    tmp_msg_0.z = 0.436920153537;
    tmp_msg_0.t = 0.378948353709;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.708125986471;
    msg.custom.assign("SVYAXUAKUJOJWIDLJCDNQOIHFCQTWTUAXOUPVGTRBJNMSMIBDUVDRPXFLCZMKHJYMVWCLBQPRJOHDUAQDTYZWGRSGTNKKBFVPNAZMATZFWGETMVNHAVMQIEZDXNHKAOJEERWBPPHOLZFXGZLCKDILJFENFSXXQPOVYDGCFSTKPONISJZVGKZEQXQYEWWXPWHUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.955782968555);
    msg.setSource(24379U);
    msg.setSourceEntity(235U);
    msg.setDestination(43167U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.0745294337312;
    msg.lon = 0.161380897633;
    msg.z = 0.751907365885;
    msg.z_units = 41U;
    msg.speed = 0.848057267149;
    msg.speed_units = 244U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.665475865003;
    tmp_msg_0.y = 0.356808356866;
    tmp_msg_0.z = 0.00873405857216;
    tmp_msg_0.t = 0.7133170605;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.60169654832;
    msg.custom.assign("EGZNYKFKQBXLOVAQWGHDXEIMFNCHVDRBVAWNTPNLHWTLKBOFZMDSINGBIFFETZWKATYWHCCJGXCHLMUNZTYUAQNGSCHFKXEOQVBOQWPCQQSPFWYIROIRSGYZRHFXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.356345442423);
    msg.setSource(36239U);
    msg.setSourceEntity(251U);
    msg.setDestination(37605U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.76746991233;
    msg.lon = 0.303937274909;
    msg.z = 0.0242398364401;
    msg.z_units = 118U;
    msg.speed = 0.168053415479;
    msg.speed_units = 95U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.609141822926;
    tmp_msg_0.y = 0.28621296846;
    tmp_msg_0.z = 0.573929582194;
    tmp_msg_0.t = 0.66847560214;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.157430028714;
    msg.custom.assign("PNGFFTXSZAMWVZWCJIHDOEZXYECIYCSNRKYMRSYVRRNVXAGTUGUAUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.325900151155);
    msg.setSource(64679U);
    msg.setSourceEntity(68U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(75U);
    msg.vid = 36425U;
    msg.off_x = 0.177024959291;
    msg.off_y = 0.0683873563052;
    msg.off_z = 0.145805174752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.251768003047);
    msg.setSource(23546U);
    msg.setSourceEntity(2U);
    msg.setDestination(57093U);
    msg.setDestinationEntity(33U);
    msg.vid = 64463U;
    msg.off_x = 0.580591945636;
    msg.off_y = 0.977074404477;
    msg.off_z = 0.29651140494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.567414799488);
    msg.setSource(14464U);
    msg.setSourceEntity(45U);
    msg.setDestination(4738U);
    msg.setDestinationEntity(234U);
    msg.vid = 13536U;
    msg.off_x = 0.503080862956;
    msg.off_y = 0.824523151242;
    msg.off_z = 0.454923251604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.752387470789);
    msg.setSource(35419U);
    msg.setSourceEntity(141U);
    msg.setDestination(9785U);
    msg.setDestinationEntity(58U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.00690055694148);
    msg.setSource(10861U);
    msg.setSourceEntity(253U);
    msg.setDestination(29305U);
    msg.setDestinationEntity(237U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.430347130909);
    msg.setSource(56067U);
    msg.setSourceEntity(95U);
    msg.setDestination(52711U);
    msg.setDestinationEntity(191U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.815093273862);
    msg.setSource(12491U);
    msg.setSourceEntity(101U);
    msg.setDestination(33135U);
    msg.setDestinationEntity(220U);
    msg.mid = 11490U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.835081761154);
    msg.setSource(44601U);
    msg.setSourceEntity(10U);
    msg.setDestination(56250U);
    msg.setDestinationEntity(146U);
    msg.mid = 23028U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.921141970726);
    msg.setSource(29180U);
    msg.setSourceEntity(215U);
    msg.setDestination(6707U);
    msg.setDestinationEntity(66U);
    msg.mid = 53539U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.92414121249);
    msg.setSource(55029U);
    msg.setSourceEntity(98U);
    msg.setDestination(21406U);
    msg.setDestinationEntity(34U);
    msg.state = 148U;
    msg.eta = 58247U;
    msg.info.assign("WTVOGBIERQCPLWNSXVYZOQVFRGHOSNDMTOCVIGQGJFCRPWZIXMCIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.309330765371);
    msg.setSource(14402U);
    msg.setSourceEntity(91U);
    msg.setDestination(48545U);
    msg.setDestinationEntity(87U);
    msg.state = 143U;
    msg.eta = 9545U;
    msg.info.assign("KHAUYEFJZIROVOSWZHFNRIXTCDCWGKXMWYOFKAYMUTGJBMTQTMVZGHZHMRCSLVUTDVRSWPGFLMEZSAPDDPNUCAOZWNFJFEEWARLUXEVOHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.101679042);
    msg.setSource(13441U);
    msg.setSourceEntity(206U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(65U);
    msg.state = 218U;
    msg.eta = 2846U;
    msg.info.assign("DAGSNSACHEIFTZEUZVPMHVWAVUECEGFUYPHDKFFGENBZYXRKEFJLIRTKYCZDNKOYYEGYLICKZTDFXEUDVDGQAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.806559120569);
    msg.setSource(18900U);
    msg.setSourceEntity(209U);
    msg.setDestination(63160U);
    msg.setDestinationEntity(112U);
    msg.system = 30097U;
    msg.duration = 14928U;
    msg.speed = 0.200504582553;
    msg.speed_units = 115U;
    msg.x = 0.0892890834279;
    msg.y = 0.0694258033187;
    msg.z = 0.612642909599;
    msg.z_units = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.186528678006);
    msg.setSource(61885U);
    msg.setSourceEntity(242U);
    msg.setDestination(8480U);
    msg.setDestinationEntity(7U);
    msg.system = 11419U;
    msg.duration = 46389U;
    msg.speed = 0.356065539202;
    msg.speed_units = 14U;
    msg.x = 0.437680490815;
    msg.y = 0.272998968487;
    msg.z = 0.304122292327;
    msg.z_units = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.231804268536);
    msg.setSource(60436U);
    msg.setSourceEntity(43U);
    msg.setDestination(56557U);
    msg.setDestinationEntity(221U);
    msg.system = 13859U;
    msg.duration = 16196U;
    msg.speed = 0.579114069301;
    msg.speed_units = 195U;
    msg.x = 0.578436525646;
    msg.y = 0.377422503002;
    msg.z = 0.949488507663;
    msg.z_units = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.302574802406);
    msg.setSource(8714U);
    msg.setSourceEntity(192U);
    msg.setDestination(9999U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.500740631298;
    msg.lon = 0.629012984611;
    msg.speed = 0.25695569162;
    msg.speed_units = 80U;
    msg.duration = 16350U;
    msg.sys_a = 39842U;
    msg.sys_b = 23081U;
    msg.move_threshold = 0.488297474121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.424447863376);
    msg.setSource(10542U);
    msg.setSourceEntity(215U);
    msg.setDestination(62037U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.622330090253;
    msg.lon = 0.831160644252;
    msg.speed = 0.258123787484;
    msg.speed_units = 193U;
    msg.duration = 40471U;
    msg.sys_a = 63177U;
    msg.sys_b = 31269U;
    msg.move_threshold = 0.223430316145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.138234179374);
    msg.setSource(53296U);
    msg.setSourceEntity(37U);
    msg.setDestination(61794U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.653686252459;
    msg.lon = 0.469236775565;
    msg.speed = 0.30599089061;
    msg.speed_units = 37U;
    msg.duration = 9364U;
    msg.sys_a = 53624U;
    msg.sys_b = 41818U;
    msg.move_threshold = 0.467072935697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.215703844085);
    msg.setSource(28870U);
    msg.setSourceEntity(9U);
    msg.setDestination(6945U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.172012574517;
    msg.lon = 0.0359373297184;
    msg.z = 0.176728392945;
    msg.z_units = 248U;
    msg.speed = 0.899442868997;
    msg.speed_units = 2U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.411843475954;
    tmp_msg_0.lon = 0.844103884748;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FIGJQVPNHZBLIVRMPPKYXVVFLCAHNXYSHVVKQATEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.805313765601);
    msg.setSource(7509U);
    msg.setSourceEntity(51U);
    msg.setDestination(40253U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.842449011555;
    msg.lon = 0.787233661694;
    msg.z = 0.578171301882;
    msg.z_units = 68U;
    msg.speed = 0.608561948977;
    msg.speed_units = 217U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.143034935844;
    tmp_msg_0.lon = 0.862377742682;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZNKADWBYJRWQAKAZVBSMCTQBRSOQDABNOTUQFYXMXTJNNJSTTUUQHDZPKOPXLMVSDXEKQZCXQHCKIJPEOIEHGNVRSOFSYLWXKZMGHFMTHYNOICWGPOUNWEBLVSIFEAYFOOJGGDMWVPLBLTHHKDBBUXIEFWMVARPNCXUUQXALZPEWFUKUVCPYPFJZXGKMGWIANEATTCMQRRCKIJPOLVHEUFYLLGZVJGIJHRIZTBFCWHRYCDYDNSDVMBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.189440073717);
    msg.setSource(33784U);
    msg.setSourceEntity(225U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.172489615889;
    msg.lon = 0.652484003736;
    msg.z = 0.212232717226;
    msg.z_units = 198U;
    msg.speed = 0.443617103266;
    msg.speed_units = 156U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0261639929073;
    tmp_msg_0.lon = 0.660551765113;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SLWRKRQJQUDYJJKIBYIXAYOPYCYVAHHFHFSCNLRQINFBZBNXJNBQGUWUKQTPEZDPMOZXOAHMLZAZARMODRSDXTJWNKQHLQXNYAHVVYPAYAMFESLFZNJCWFIJGXNMEEJZLKRVLZXTRSCLICSPYCWWIAMPQUIMGCWZEGOBQZJKDMINUTJHCNVTSFUKOUWYDSLDVKDRTHGTPBXGOPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.0620999822699);
    msg.setSource(3034U);
    msg.setSourceEntity(56U);
    msg.setDestination(2810U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.618010347028;
    msg.lon = 0.483341548442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.911284562565);
    msg.setSource(8869U);
    msg.setSourceEntity(208U);
    msg.setDestination(24786U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.286177641929;
    msg.lon = 0.859891119008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.807984649025);
    msg.setSource(21363U);
    msg.setSourceEntity(67U);
    msg.setDestination(31036U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.811068484293;
    msg.lon = 0.224550470432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.368261413254);
    msg.setSource(33186U);
    msg.setSourceEntity(247U);
    msg.setDestination(14491U);
    msg.setDestinationEntity(18U);
    msg.timeout = 23095U;
    msg.lat = 0.042613666569;
    msg.lon = 0.0202400015934;
    msg.z = 0.658712954307;
    msg.z_units = 238U;
    msg.pitch = 0.569639280416;
    msg.amplitude = 0.969527833032;
    msg.duration = 62269U;
    msg.speed = 0.206643264628;
    msg.speed_units = 97U;
    msg.radius = 0.597534870413;
    msg.direction = 1U;
    msg.custom.assign("JZKSAAYKXFUZZXQHLHQJVTPWCBDYUGBNEDSCACTCGKFFVFQIRLZWENZGAARXLLLPLBYWYKWIGHZPXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.64501692924);
    msg.setSource(16119U);
    msg.setSourceEntity(244U);
    msg.setDestination(27923U);
    msg.setDestinationEntity(186U);
    msg.timeout = 29621U;
    msg.lat = 0.616684828761;
    msg.lon = 0.0364036698452;
    msg.z = 0.813793901338;
    msg.z_units = 234U;
    msg.pitch = 0.589860983082;
    msg.amplitude = 0.777158255181;
    msg.duration = 8061U;
    msg.speed = 0.194003566732;
    msg.speed_units = 21U;
    msg.radius = 0.645271344192;
    msg.direction = 194U;
    msg.custom.assign("EKRCWLBXSVKOEGFQQIAAYURLRBXDIKOUXODRLFSZNTYMCCOXKNVGQQUDFNVVFANBMNASSKRKDTUMZTGPBRIGKHRDXGAQGHGESMJUDHFMYDEFWLNSGNHHPWUCWBPJLJNZXIYXSYVIJVIIHFMYCDSKUPYVQQZGKOVHQDPMAUFBLOVZPRUTOCWBZTCOLSMZTIMCQWJEOEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.722294842695);
    msg.setSource(29272U);
    msg.setSourceEntity(52U);
    msg.setDestination(48547U);
    msg.setDestinationEntity(211U);
    msg.timeout = 38739U;
    msg.lat = 0.448240299211;
    msg.lon = 0.279281525212;
    msg.z = 0.266017915397;
    msg.z_units = 217U;
    msg.pitch = 0.100122550803;
    msg.amplitude = 0.904652447578;
    msg.duration = 61347U;
    msg.speed = 0.875905449912;
    msg.speed_units = 160U;
    msg.radius = 0.955566975757;
    msg.direction = 22U;
    msg.custom.assign("SVXVUSTZFEZUKLLMQGNRZLXWTAJCMCGRHFNHQVVCQOURPKEHORIBZWTMQKSPHJFDNGICUCQBUKTEINGLBHTWDETNZMRBFIGCWTPRBYTIOOQNVYGWXALMFIQHAPSWWKKRDXYHDBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.435433415087);
    msg.setSource(16848U);
    msg.setSourceEntity(142U);
    msg.setDestination(62493U);
    msg.setDestinationEntity(2U);
    msg.formation_name.assign("OPVODLDPXIOGNYEKZWSQFBQYFASVWBKYBGUMTIEIDIAIGRGXSZLPEVWMRROUKZGLGTVBJVLZPQYYJDXNIKQFUIMJUTHCATXMSGRWPJMXLRYRQTCEXSHZUGZIJQPSCXLDKCUTAYEEFBUWBXPKSJIMCRRDHFHCKOWGSRYLJVTZMNHDAYCDHCFWXNOQONNUWZGQIKSBBOWWARKESANDBMOF");
    msg.reference_frame = 38U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52193U;
    tmp_msg_0.off_x = 0.653335559883;
    tmp_msg_0.off_y = 0.131059875824;
    tmp_msg_0.off_z = 0.122892627659;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DOPBICBMHQLHCEINIJQSVLEQYVHHIHGRAZAOGUQFKHLCCIGAJJNASXBSXGGEKVORYPOYZBTZLMJQBJYOQULGVITPMTWNUMDPWEYWJMBRACOLVTUBHECRYAUNMNJDEPKWQATRKVAWPUUNYZBDTCOZQAKPSPCAOOTTKJRXKWEVDCDNMENULFFXUVSQVZSWJVBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.912432055114);
    msg.setSource(32951U);
    msg.setSourceEntity(108U);
    msg.setDestination(20188U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("ISJSZSTMEVPNCFIEWGBCMRZMLRBJXABQJDGQOHGVOLRVZRDMUHQOYNAUQPNOLOEEVWSFKAISXAXDR");
    msg.reference_frame = 217U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15770U;
    tmp_msg_0.off_x = 0.360600929987;
    tmp_msg_0.off_y = 0.305189731;
    tmp_msg_0.off_z = 0.275372613946;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KCCQRXTVWYHWMWLSQQEIIEJACZLXLGFEFITELINCJGBBGUTBBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.749547380098);
    msg.setSource(59441U);
    msg.setSourceEntity(203U);
    msg.setDestination(37542U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("ZETWWGFBEJDJIQEMGKTUNFCXPOOKYZIBHHLGSWOAMOSNCXBKULPLRFVCKRRSFAMMQOLPUZBVJVKWMVJICMEYTODFLGDROQUYRHMSJZWEPSRUWYFTGZVRVQK");
    msg.reference_frame = 68U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64883U;
    tmp_msg_0.off_x = 0.51385766592;
    tmp_msg_0.off_y = 0.347909639615;
    tmp_msg_0.off_z = 0.185965744568;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GMBBJNSBXOWYNVVOVBHQYJLNDDTVWXZWLTAMRWXUZNXCXSTBQEJLNEYRPFKAXSZHQCFZHRUTPLTVSVUZYMUEZASWFXRPLAXTOROCHMFIHWJTYAQYYUQLQLOCVTWFAINUHPDYJMNCNQGLUESRIUQDTISKDGZMPHNIRTKSSIDAHKDPJKOOGHEWBMQJFBDEUCVGAEKDRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.219942182104);
    msg.setSource(2263U);
    msg.setSourceEntity(197U);
    msg.setDestination(43950U);
    msg.setDestinationEntity(57U);
    msg.group_name.assign("XPRLQTIMHHADSAWKVMEKJFESVWRHWSONYJNLGWMCDZJNQCKPDFRMLOZOICZOBRGWCPUXQIPHEMQSUTNWVVKWHGOAULTGDFYPGHBASKSAATHIPXSIVBUVMKRLVBHNWNYBGPFXCZZAWQFPDRXXUYNNUXBLQOXCQDZHUKGTAE");
    msg.formation_name.assign("ZLLTOJRFWGUCIAQUSAOEYSRKYXPOBZDVTKFNQIQRJMRAHEDDJPXRINTKAHMABZUTEQXYGSDALYMDVHDWBHBLMEZFQKVYYRBWJIIJMJWVOSPCSXUJWCGQXNGQILMNPCOA");
    msg.plan_id.assign("TJNEMDCAPGGWMRZWRDQCRRL");
    msg.description.assign("BYHXCLVLEPQIYCRANFLRSCZRVDMRXVCTFGQNTOLHEIMGJESMVPEEKWQYSFSDAXEPTWILCHJVDMACWNPPTMRGDKQWPMOUBYTGKUETOEFUYKJMGSZKOBLGFSEUAQAMVUVTCYPXONXIASUABSGHHIOHXMRTAKUNDWLXOXWNUHIWVRMIDZHB");
    msg.leader_speed = 0.959189787495;
    msg.leader_bank_lim = 0.423574935671;
    msg.pos_sim_err_lim = 0.0908620012105;
    msg.pos_sim_err_wrn = 0.891721759156;
    msg.pos_sim_err_timeout = 47360U;
    msg.converg_max = 0.839544367441;
    msg.converg_timeout = 18371U;
    msg.comms_timeout = 8311U;
    msg.turb_lim = 0.429458079977;
    msg.custom.assign("ETTNOCJYQVPROTSRTCAUTFBZTFADGVAUQOWTUFMSHVHVFBJRIZDXNKKKEMLROMCXEZKKECLGHLRFIDWQWXCOCRBJXDSRJCWXQFOASPGKIPBSPBQDUMNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.519817298497);
    msg.setSource(34615U);
    msg.setSourceEntity(181U);
    msg.setDestination(41692U);
    msg.setDestinationEntity(74U);
    msg.group_name.assign("FBBXOOPEXXKYNNQWKEZCNZSWJZVRNKURNTTEBDSCWUUTYIIVYQOGGFKEEPOCFQPRWOSHKOMWILPALZTEVSABBNLPPMTCAXQUSXPXZHKQYCYMMJFDDZMSHZNSAXKSTGVOMSLRHGEVGPCQIFDGUOVUVJOMDJDKDJNCJWUTDRNAQKLBIFHVBUWCLQKAEXUVDYYZJATFLFWHXMRMBXFTHYGJAAPNCCBVAGWIZQYHQLI");
    msg.formation_name.assign("BWMXOIPLEACJEVQJQCUJWPFJCEKMEKYLKZDBFZNNHUPSKUDEBAHYGGGADLOEM");
    msg.plan_id.assign("REPMKWIJMGWFDPNKROVPYFAETTRLYNLGUUGFXZXFWBEEYTTBZMLZAQNXDNISXENQCQSTVOBHPGJZLUMEQIOYFVWHHLCXJOIVAIDWKFVTSGAGAPXHXJKQIESRHJZMUBHEBMNUFQCZFNSUHRQCRYBZBYNOAGYKSFCYTIDKOMNLADPTRRJSVEBHSJOTHJZYHAPWWGQPCGEMSUYDMZPXMPLAIKIXV");
    msg.description.assign("SBRJQLSPPEXLDXDYRCFYLBTOJRISFUQIAPRGKEOLHTIAJGVCQHGZCWHBTDU");
    msg.leader_speed = 0.542098425173;
    msg.leader_bank_lim = 0.56166575051;
    msg.pos_sim_err_lim = 0.868577497279;
    msg.pos_sim_err_wrn = 0.100451879563;
    msg.pos_sim_err_timeout = 30053U;
    msg.converg_max = 0.970949662065;
    msg.converg_timeout = 32968U;
    msg.comms_timeout = 34611U;
    msg.turb_lim = 0.285096535374;
    msg.custom.assign("ZHWPFVMJGOVUFNYJAGSTHHIONFICLXWVUBROYCGWCQXVSCJQEGSFMCLFISEAPFNAQVZKAJBDWNZLUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.610721320346);
    msg.setSource(44953U);
    msg.setSourceEntity(108U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(6U);
    msg.group_name.assign("ELQUJVVRIXXBGKHKDSCABZSKHMSTKZFNGQHTJGMYYGTXFFJLWNFUTLVHIWOBQLKMCNIFUXYSWHPPIIANRUPDSZAJXDVLMVPITSMNWGURTDWBQUFJOEGQWALTRNKAYLWBQOEZWQWPYDIGTKXRJVZDCHCUAOMVSMJFGCFESDHIELUORLCFHPCRPZOZKJOGVVQCYOTBBNSMPHGKYXVJIOCHPDMXAPEAAAYFRZMUNIEWSRTUNDRNOXBLQE");
    msg.formation_name.assign("AFUWCTYXKXJFOUXAQIDWLHSXISTOPDWNFMOVCGSYZTERNGSXYZMGJBGVJCCDOGHIJLQMBVKHHUZHFA");
    msg.plan_id.assign("XGIOKCHKZBFUDXCIEZOOJIQKRHLFXDFUQKDXHEZSQOZWBTISNUWGIYVCUNVPJGDRMTTKJCXGSJPZPLHEMBBARVLLDZQJSIWASTRPMTNDLLLHGXIBUMTEAGVAJQMGCMYEOCEDGSWZCUSHOCKEVIIMORNOVSVYORKQIYFMTLNBRVJKPFFCUWYPWKNDMRUTEJXYVJNWNMLNCQTBAPHAUAYPRBAUWGQEEBAHZBPYXPSHNZFWDFTF");
    msg.description.assign("QPRXMTKLFDDJZHLETGLIXZURSQJBPWGHWLXQZSQBCUYSCYPAKFYZGGSMHSKZBJANNLJIJLEQGYKEQRFPDMAMUOHHCIIFNQJRFBSYGRRFBMDGGBBGNCEOOOOFXKPKEVHKTZVISCNEDAZWONDHLTAOPUOEMYUGXZCUVXIWCTHWRQBMXTATENEVTJYZSIIRYDQWRMAPNFSJUPDF");
    msg.leader_speed = 0.694162449217;
    msg.leader_bank_lim = 0.577395677873;
    msg.pos_sim_err_lim = 0.355704656836;
    msg.pos_sim_err_wrn = 0.42477753066;
    msg.pos_sim_err_timeout = 36423U;
    msg.converg_max = 0.910340924564;
    msg.converg_timeout = 50646U;
    msg.comms_timeout = 15959U;
    msg.turb_lim = 0.651774895414;
    msg.custom.assign("WSCSRJKQQTTZVCYNJEZABYGVOKUMCVAWQHMJLSPZPLLDFUVCGUFYVFOVHBSPGBBRODQNLAEGVOIVHKLENUTODDUDRBHQEFCQZRLIGZGXUYMYXLGIEMSBWWMJDPCIDZRNRRPBAJKUYMBMNNKTUUBIORZKHABMPVPJOFHIAXFTFTISKTYNSFWEASCHXRTQXNEVWJPYFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.283719113369);
    msg.setSource(58426U);
    msg.setSourceEntity(42U);
    msg.setDestination(15402U);
    msg.setDestinationEntity(104U);
    msg.control_src = 36448U;
    msg.control_ent = 12U;
    msg.timeout = 0.615702117903;
    msg.loiter_radius = 0.756220567376;
    msg.altitude_interval = 0.0700425280122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.401614068256);
    msg.setSource(13897U);
    msg.setSourceEntity(57U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(246U);
    msg.control_src = 35375U;
    msg.control_ent = 171U;
    msg.timeout = 0.218218710243;
    msg.loiter_radius = 0.534333498453;
    msg.altitude_interval = 0.659224437814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.901397021633);
    msg.setSource(47616U);
    msg.setSourceEntity(106U);
    msg.setDestination(51017U);
    msg.setDestinationEntity(62U);
    msg.control_src = 4532U;
    msg.control_ent = 141U;
    msg.timeout = 0.654984967609;
    msg.loiter_radius = 0.857391376751;
    msg.altitude_interval = 0.683609917271;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.889226889781);
    msg.setSource(29766U);
    msg.setSourceEntity(56U);
    msg.setDestination(29145U);
    msg.setDestinationEntity(75U);
    msg.flags = 134U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0184566612266;
    tmp_msg_0.speed_units = 77U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.24334444998;
    tmp_msg_1.z_units = 186U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0189915107523;
    msg.lon = 0.949911248026;
    msg.radius = 0.321052031739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.0361975869092);
    msg.setSource(11478U);
    msg.setSourceEntity(225U);
    msg.setDestination(51767U);
    msg.setDestinationEntity(200U);
    msg.flags = 171U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.915906357165;
    tmp_msg_0.speed_units = 46U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.134396733804;
    tmp_msg_1.z_units = 190U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.224519374568;
    msg.lon = 0.336544075686;
    msg.radius = 0.675563661401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.830702771005);
    msg.setSource(14471U);
    msg.setSourceEntity(247U);
    msg.setDestination(61002U);
    msg.setDestinationEntity(71U);
    msg.flags = 34U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.666699714954;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.34037908321;
    tmp_msg_1.z_units = 138U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.191393774045;
    msg.lon = 0.55795734075;
    msg.radius = 0.338680957625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.496892961306);
    msg.setSource(44149U);
    msg.setSourceEntity(169U);
    msg.setDestination(2171U);
    msg.setDestinationEntity(11U);
    msg.control_src = 58671U;
    msg.control_ent = 71U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 4U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.474757772016;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.479155657498;
    tmp_tmp_msg_0_1.z_units = 102U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.357360966988;
    tmp_msg_0.lon = 0.838919787747;
    tmp_msg_0.radius = 0.743159106938;
    msg.reference.set(tmp_msg_0);
    msg.state = 113U;
    msg.proximity = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.404138667072);
    msg.setSource(63565U);
    msg.setSourceEntity(103U);
    msg.setDestination(13381U);
    msg.setDestinationEntity(167U);
    msg.control_src = 64358U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 123U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.374136448646;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.156704600299;
    tmp_tmp_msg_0_1.z_units = 240U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.902427031163;
    tmp_msg_0.lon = 0.8956091898;
    tmp_msg_0.radius = 0.189806046268;
    msg.reference.set(tmp_msg_0);
    msg.state = 204U;
    msg.proximity = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.500506241398);
    msg.setSource(19122U);
    msg.setSourceEntity(160U);
    msg.setDestination(64503U);
    msg.setDestinationEntity(204U);
    msg.control_src = 20878U;
    msg.control_ent = 203U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 143U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.133260993037;
    tmp_tmp_msg_0_0.speed_units = 63U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.782406996775;
    tmp_tmp_msg_0_1.z_units = 72U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.00716526472472;
    tmp_msg_0.lon = 0.9635396938;
    tmp_msg_0.radius = 0.0393676751581;
    msg.reference.set(tmp_msg_0);
    msg.state = 79U;
    msg.proximity = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.829985064408);
    msg.setSource(57563U);
    msg.setSourceEntity(26U);
    msg.setDestination(3919U);
    msg.setDestinationEntity(136U);
    msg.ax_cmd = 0.453211495652;
    msg.ay_cmd = 0.765811217273;
    msg.az_cmd = 0.5798106127;
    msg.ax_des = 0.87890400266;
    msg.ay_des = 0.632156901825;
    msg.az_des = 0.200670061604;
    msg.virt_err_x = 0.96454217153;
    msg.virt_err_y = 0.842150209149;
    msg.virt_err_z = 0.399419485726;
    msg.surf_fdbk_x = 0.46359066311;
    msg.surf_fdbk_y = 0.751593911101;
    msg.surf_fdbk_z = 0.0134713585178;
    msg.surf_unkn_x = 0.987477600585;
    msg.surf_unkn_y = 0.616944569494;
    msg.surf_unkn_z = 0.508292029324;
    msg.ss_x = 0.339805737253;
    msg.ss_y = 0.933991668625;
    msg.ss_z = 0.494766627743;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.03647907797);
    msg.setSource(18624U);
    msg.setSourceEntity(177U);
    msg.setDestination(39248U);
    msg.setDestinationEntity(236U);
    msg.ax_cmd = 0.641583847071;
    msg.ay_cmd = 0.077844393023;
    msg.az_cmd = 0.87901275755;
    msg.ax_des = 0.533976917375;
    msg.ay_des = 0.150610814968;
    msg.az_des = 0.188850100178;
    msg.virt_err_x = 0.199093445586;
    msg.virt_err_y = 0.831096185392;
    msg.virt_err_z = 0.317688736419;
    msg.surf_fdbk_x = 0.334084650645;
    msg.surf_fdbk_y = 0.738205427824;
    msg.surf_fdbk_z = 0.615797643249;
    msg.surf_unkn_x = 0.0854990494725;
    msg.surf_unkn_y = 0.502719919685;
    msg.surf_unkn_z = 0.073672363915;
    msg.ss_x = 0.562691607323;
    msg.ss_y = 0.046867737304;
    msg.ss_z = 0.891665180747;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.67080542386);
    msg.setSource(24197U);
    msg.setSourceEntity(164U);
    msg.setDestination(65512U);
    msg.setDestinationEntity(165U);
    msg.ax_cmd = 0.809148328086;
    msg.ay_cmd = 0.982460673974;
    msg.az_cmd = 0.694149210884;
    msg.ax_des = 0.571863524567;
    msg.ay_des = 0.0588342860869;
    msg.az_des = 0.524995097798;
    msg.virt_err_x = 0.158071738388;
    msg.virt_err_y = 0.210712978842;
    msg.virt_err_z = 0.478060820679;
    msg.surf_fdbk_x = 0.409183337899;
    msg.surf_fdbk_y = 0.332710130227;
    msg.surf_fdbk_z = 0.716768907097;
    msg.surf_unkn_x = 0.652212198511;
    msg.surf_unkn_y = 0.986183245483;
    msg.surf_unkn_z = 0.841181767923;
    msg.ss_x = 0.927885419972;
    msg.ss_y = 0.931912103311;
    msg.ss_z = 0.671965641329;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FKKMWOWHBJWOYLJQJHOYGUKATJNZTCFYIRUPTMBPTNCAKZDZRQTWCSSJGNPYLNAVKZEROFEKVHTLUQWUHDMQANWVCXOJADKNTPSGDHQGMSLIQVHEKSYZCSPVBCBTFYUGVDYLAOPAEZZXBRIXLEFAHUHEEWUOVBOLUECNIMXZRZMPXMHRODFFJISZIJE");
    tmp_msg_0.dist = 0.353271760348;
    tmp_msg_0.err = 0.215413449894;
    tmp_msg_0.ctrl_imp = 0.643462847742;
    tmp_msg_0.rel_dir_x = 0.126216007067;
    tmp_msg_0.rel_dir_y = 0.151865307927;
    tmp_msg_0.rel_dir_z = 0.577987316652;
    tmp_msg_0.err_x = 0.313622665429;
    tmp_msg_0.err_y = 0.779142347498;
    tmp_msg_0.err_z = 0.613170429066;
    tmp_msg_0.rf_err_x = 0.234381698013;
    tmp_msg_0.rf_err_y = 0.332655231497;
    tmp_msg_0.rf_err_z = 0.462112953951;
    tmp_msg_0.rf_err_vx = 0.299810761431;
    tmp_msg_0.rf_err_vy = 0.478158207078;
    tmp_msg_0.rf_err_vz = 0.860377762416;
    tmp_msg_0.ss_x = 0.841912291139;
    tmp_msg_0.ss_y = 0.968272895868;
    tmp_msg_0.ss_z = 0.0755843316945;
    tmp_msg_0.virt_err_x = 0.0580834989728;
    tmp_msg_0.virt_err_y = 0.688120304284;
    tmp_msg_0.virt_err_z = 0.700932063817;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.464354569053);
    msg.setSource(19975U);
    msg.setSourceEntity(26U);
    msg.setDestination(48462U);
    msg.setDestinationEntity(15U);
    msg.s_id.assign("GOGPBMAHOCTXJLZIBNKJEBNLEMVKHVTGRAMITNI");
    msg.dist = 0.0819936317591;
    msg.err = 0.954952557194;
    msg.ctrl_imp = 0.910126540193;
    msg.rel_dir_x = 0.816439667246;
    msg.rel_dir_y = 0.0491351668204;
    msg.rel_dir_z = 0.110481561242;
    msg.err_x = 0.122743071355;
    msg.err_y = 0.118125584775;
    msg.err_z = 0.924663432008;
    msg.rf_err_x = 0.313055620472;
    msg.rf_err_y = 0.936561853526;
    msg.rf_err_z = 0.718288736067;
    msg.rf_err_vx = 0.191971422729;
    msg.rf_err_vy = 0.00899589716516;
    msg.rf_err_vz = 0.310052686819;
    msg.ss_x = 0.350035529005;
    msg.ss_y = 0.831786008963;
    msg.ss_z = 0.157224500965;
    msg.virt_err_x = 0.583590292696;
    msg.virt_err_y = 0.813551627096;
    msg.virt_err_z = 0.931957726811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.658680274655);
    msg.setSource(1107U);
    msg.setSourceEntity(222U);
    msg.setDestination(58179U);
    msg.setDestinationEntity(7U);
    msg.s_id.assign("HNMDYUNRSEGOJCRJXCEAYWZEHWHOIGPQJPESRHQYJULSSFZZKMCKTYVBKWVGAFMWEZJSPLTWASAIPRRXVXLPROTNUZGQIENFDKFVPPTDIDUQCIJINDOMHWCATKMEZNMBCGTLYFTBQNLGZLOKSOCJWYUOBAFYTEHDZVFMXKQUXCILGZNRDHRROEE");
    msg.dist = 0.203057074459;
    msg.err = 0.483489097386;
    msg.ctrl_imp = 0.400981522054;
    msg.rel_dir_x = 0.522783040634;
    msg.rel_dir_y = 0.647003118076;
    msg.rel_dir_z = 0.771213607125;
    msg.err_x = 0.409983466987;
    msg.err_y = 0.563584200568;
    msg.err_z = 0.152687607166;
    msg.rf_err_x = 0.957435670244;
    msg.rf_err_y = 0.122131223835;
    msg.rf_err_z = 0.34622597058;
    msg.rf_err_vx = 0.908506369643;
    msg.rf_err_vy = 0.464017549146;
    msg.rf_err_vz = 0.676921948795;
    msg.ss_x = 0.0102479966893;
    msg.ss_y = 0.764767530352;
    msg.ss_z = 0.782367166955;
    msg.virt_err_x = 0.219036411176;
    msg.virt_err_y = 0.00411090475323;
    msg.virt_err_z = 0.0674886458163;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.0594489544634);
    msg.setSource(45533U);
    msg.setSourceEntity(133U);
    msg.setDestination(30501U);
    msg.setDestinationEntity(31U);
    msg.s_id.assign("NROTHBEXTHVWKBGVA");
    msg.dist = 0.907724839019;
    msg.err = 0.379272761882;
    msg.ctrl_imp = 0.463391769659;
    msg.rel_dir_x = 0.955259182526;
    msg.rel_dir_y = 0.322827470715;
    msg.rel_dir_z = 0.889384721052;
    msg.err_x = 0.819897975895;
    msg.err_y = 0.361383359504;
    msg.err_z = 0.709551309457;
    msg.rf_err_x = 0.657560179488;
    msg.rf_err_y = 0.946125589883;
    msg.rf_err_z = 0.404406353636;
    msg.rf_err_vx = 0.842353863117;
    msg.rf_err_vy = 0.219188292575;
    msg.rf_err_vz = 0.0641160910412;
    msg.ss_x = 0.68239544835;
    msg.ss_y = 0.564014654855;
    msg.ss_z = 0.208165411952;
    msg.virt_err_x = 0.0356344825948;
    msg.virt_err_y = 0.225443966774;
    msg.virt_err_z = 0.801925029302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.892327358581);
    msg.setSource(53088U);
    msg.setSourceEntity(154U);
    msg.setDestination(42920U);
    msg.setDestinationEntity(14U);
    msg.timeout = 26627U;
    msg.rpm = 0.791691772167;
    msg.direction = 240U;
    msg.custom.assign("VEBOCMEQISVTQBZLGCTSWVYRLRBGXXMOWIQUAZPRYVSFTKILSEFGFQMLWYAOPJDZTHZEVJTCJQUPPUWZVACZCKXROIFPWUHZPMKEATSVRIIRLEMTWNQNAOBNGJIMDLQBVDWKKUNHPYBNMYPIJUABJHTBJNHREASGZDPVUNFIRXYCJWCQAGDOUFBLFTLXUCGJXPWAQODUSHZSMMZHHEKLFDIEGHWGXKVTNORYFXLBJYGCFKCEQYNSRODO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.403899430021);
    msg.setSource(29842U);
    msg.setSourceEntity(22U);
    msg.setDestination(26825U);
    msg.setDestinationEntity(220U);
    msg.timeout = 54395U;
    msg.rpm = 0.49805293744;
    msg.direction = 201U;
    msg.custom.assign("NYQTQPMNSMOGGAZCKAGZGMEIBXTLBPFWDRMASUTIXOWHAQEFDYERSGRUJACOCHWKNHGLUCADHUQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.125499285968);
    msg.setSource(27549U);
    msg.setSourceEntity(91U);
    msg.setDestination(53014U);
    msg.setDestinationEntity(67U);
    msg.timeout = 14470U;
    msg.rpm = 0.852305096291;
    msg.direction = 75U;
    msg.custom.assign("ZMXOKJCCZWIXYUFYCQSYUMQAGWXHFFLUPLOBDCSDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.743541651872);
    msg.setSource(16035U);
    msg.setSourceEntity(231U);
    msg.setDestination(35725U);
    msg.setDestinationEntity(179U);
    msg.op_mode = 85U;
    msg.error_count = 134U;
    msg.error_ents.assign("HYPMFFJCJXPDSHXWAJUQKBUMOFOVMRZZXQLEQNBWCRNJRWPEIIWDZGBVIPLTGFUCHPSUBHTKWLPXTUEISSARUZVUSNYCVCZTJZDLOTQ");
    msg.maneuver_type = 42196U;
    msg.maneuver_stime = 0.72110966223;
    msg.maneuver_eta = 27558U;
    msg.control_loops = 1967440682U;
    msg.flags = 50U;
    msg.last_error.assign("DXABYYGKRVWQQETFJMMKZRMMOIOZBPWAXTVZVDDQLNISREIIHYYYSFXHZJTUWEVDQKHBVPOLCHSUZULHXJUJCFTNRNTWRLCSBLMKJEENYZIYFZLNENIPWOEGFUSETUGGAFGSFAMPAWLMQSPLPGWONIYIXCFGDDJSUVQHPFVOBPWCKDUAKLHDJCTGBYGJVWZDYQIKOGMQKW");
    msg.last_error_time = 0.642792650995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.8736579988);
    msg.setSource(54699U);
    msg.setSourceEntity(22U);
    msg.setDestination(4442U);
    msg.setDestinationEntity(21U);
    msg.op_mode = 42U;
    msg.error_count = 33U;
    msg.error_ents.assign("MENXHAQZPSIVWPYYEERDXZTWSFXUEOTJTTRBYBICSMJQYDHDAMKWLGPLLSKXQGVTGUAOSLLJNTCZEUVAZIJMSRQDCWXPCKYQFOBFXHNEIFKAUGBUJENGXCRBUYILZATMOPZOZROKMCPBVNBVMVOQQJPSGNDHXFNFICJFVEJHWGRSDULFDLPGRGHIZYWHTBRHFUSNCKNEKMGDLPQXDTUVBFNRAJCKWWIRMWW");
    msg.maneuver_type = 23487U;
    msg.maneuver_stime = 0.738325042687;
    msg.maneuver_eta = 4620U;
    msg.control_loops = 366944025U;
    msg.flags = 233U;
    msg.last_error.assign("HXNIJVPBFRYAYZMLJAPWKWWJZHHGCHFBPW");
    msg.last_error_time = 0.0576208387547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0961247546506);
    msg.setSource(62570U);
    msg.setSourceEntity(130U);
    msg.setDestination(8107U);
    msg.setDestinationEntity(48U);
    msg.op_mode = 106U;
    msg.error_count = 150U;
    msg.error_ents.assign("GBGJBUVZUUHGMGQHWWKTWDCXWOZFJYTIUROMQHQSYMASXBNVJCLWRGWLIAZFRCOBPMNBDNMYJBURCYRFODERLAJFKADF");
    msg.maneuver_type = 19594U;
    msg.maneuver_stime = 0.405365370318;
    msg.maneuver_eta = 29266U;
    msg.control_loops = 187491840U;
    msg.flags = 94U;
    msg.last_error.assign("KNZFAZZBSZBBFHVTZQJUBNWTRSEZAXYAABBEPKDNYWYBDYFVUETPWCICUTQAWWREEOIAVTHLOXEQXDGRPJGJOLMSAYFIZMGTRGEQRJFJXVIIESUCTCYPDQUVUNQQTJHBDVNVPKAMENDWXOSDXAHOIFDIRRSOQPXFUWZYXKVHCPNSIOUMDRJKPW");
    msg.last_error_time = 0.719672616371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.350259456253);
    msg.setSource(51249U);
    msg.setSourceEntity(183U);
    msg.setDestination(1617U);
    msg.setDestinationEntity(56U);
    msg.type = 180U;
    msg.request_id = 27210U;
    msg.command = 9U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 22820U;
    tmp_msg_0.lat = 0.055784760482;
    tmp_msg_0.lon = 0.769276655191;
    tmp_msg_0.z = 0.189812549046;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.912114145661;
    tmp_msg_0.speed_units = 217U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.171271023408;
    tmp_tmp_msg_0_0.y = 0.135444816566;
    tmp_tmp_msg_0_0.z = 0.856623658402;
    tmp_tmp_msg_0_0.t = 0.664049692796;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ZIQAIUSXCNFWRMGEFQTNYPCOFHJDTYBIWNSGJTLVBCRKTDRYWNXJLGGDLOUNNQSZPPYKDQBQHKFXLRAACPAWXXEULYMOUPSVXWCDPIZXUXBQIVTZMFAHVMVZQUOHVUITZLECJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33503U;
    msg.info.assign("CTRFYAASWZCHDWCEFMTNNEOCLGRHXAILVJSMKFTWABYVTKYGUNLVSXHPARVDMIZOVPRKIEFTKJZXUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.503618418487);
    msg.setSource(12002U);
    msg.setSourceEntity(225U);
    msg.setDestination(54994U);
    msg.setDestinationEntity(8U);
    msg.type = 222U;
    msg.request_id = 3665U;
    msg.command = 194U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 42911U;
    tmp_msg_0.lat = 0.0881538525947;
    tmp_msg_0.lon = 0.0475466685452;
    tmp_msg_0.z = 0.479238387346;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.duration = 14597U;
    tmp_msg_0.speed = 0.784716952321;
    tmp_msg_0.speed_units = 45U;
    tmp_msg_0.type = 24U;
    tmp_msg_0.radius = 0.19751950278;
    tmp_msg_0.length = 0.630563549636;
    tmp_msg_0.bearing = 0.358176543276;
    tmp_msg_0.direction = 171U;
    tmp_msg_0.custom.assign("CXUWXKJHWCPSWWBPMOPHHRPYGIQZAUARDGUFQSPKDGCSYNHRIGGOQDURFUZEA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55982U;
    msg.info.assign("EUEWCGGPDOEVVWOGHZFNYHUUXLUGQOHLDBYIYTDKSYTTCXBGFZQTRNVMITEHAHSJFQKSDOFSZMJVSQGJHHRCZFLUESCERVOPYUXLQTERDRRPLKRJKOBZFJAZRJMHPJAUMYWYANMTVSXJLXGIKVOKUAMGHCKJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.824522433097);
    msg.setSource(21250U);
    msg.setSourceEntity(239U);
    msg.setDestination(60529U);
    msg.setDestinationEntity(220U);
    msg.type = 40U;
    msg.request_id = 9183U;
    msg.command = 250U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.549102320193;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 28670U;
    tmp_msg_0.custom.assign("QIWWMKXPQMFARAZLCTOLGETNDULAHSBFBSKTFJLMLOPBGLUJQNQUCVLKETPRZSBHPGEAWVOGNUOEJNINXYONNWVRTHIZTWHMQHPXMFYNDKNKOGFYIHCJYZKOCZZLUSGAXICAIACNAWHUYVESLVPJIIDFYRKCPYUBLAWGSUBWOTRRFEVJEZIDDTHPMSZDUEQGGDZCIAVZXRGUDFBKQKEWQXXYRVBDHXXVXJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13933U;
    msg.info.assign("VPGIKBOAVKDGTHOCMUAEWBBYGQIKDKLZKJRNKNXOUZEJVGIGZAVLXPJLTZVFQNOZCUVMISQPJZSDDBLSXFFAXXRIITRGECMLEPRDQCEAHZLTYDEJJYAYTOBCDFROOOWNDHWSWRQMITMUHKRNBPQSQCPQUYVHWRYWNJKCLVXDLTTLSUEOLWUPWWFEGSVATB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.379235533417);
    msg.setSource(59209U);
    msg.setSourceEntity(119U);
    msg.setDestination(65509U);
    msg.setDestinationEntity(42U);
    msg.command = 127U;
    msg.entities.assign("QWNMLIYRTXXSEGJGHJFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.703579965086);
    msg.setSource(9511U);
    msg.setSourceEntity(123U);
    msg.setDestination(43217U);
    msg.setDestinationEntity(10U);
    msg.command = 112U;
    msg.entities.assign("WQOWLPXTJFLPMAGVTCQSQBAUEBELCHFBDIAOVDNCZIABTTNLJPJUSSSCGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.768353871211);
    msg.setSource(45265U);
    msg.setSourceEntity(245U);
    msg.setDestination(9043U);
    msg.setDestinationEntity(199U);
    msg.command = 171U;
    msg.entities.assign("RPAGYVYKFOLWNAEKYEMEEZAYTEBBACCQHSJMLPHEVKKQHHDOPERMXKVWGGDOSDQHFPMAZTPWIOLXGOOEPCVSHUINUTBVWJFDHRTGRNDTULMRVXDALDBFIJTSFXUKGGJZBNFFIQXRVUFNVJWPCNHYQTQRNLZSMSNPABQXWGQOQILNFCCSJPNMVJRPZDXMACRUALBUSCUWSCMCOJLBVYKYKXZETYZXITWIKMBHDXGHYTOWKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.604209087063);
    msg.setSource(32551U);
    msg.setSourceEntity(89U);
    msg.setDestination(51229U);
    msg.setDestinationEntity(53U);
    msg.mcount = 114U;
    msg.mnames.assign("FBEBYNWSRUBTFDNYLAUMQQZLAXCNJGJXMDSHZMLCQTUCVRHYAQCBYZFBLEMOLGHGLKJVJJNVEZHZDCGQLKXCVXTHJKEJMDZRQDJATBCWMFIOSCGFEJUDRAPORWKVEYOWVANPURSDUWDHIXYSSFTKOKPEIOXPSUXKWIEHBKOPWIGIVJTNQBLVPYZRIAZXMOFHTNFPFTKWACMAGNHAZWXHTOBOSKNGRYLUESDCIB");
    msg.ecount = 185U;
    msg.enames.assign("YNHTMNVHUBKZXPESUNLXZOACKNHXEWTWUHMXEHADMQGNKPJHIJCERJFDPHNINYUOTUASETSTWYLMVAQUGFQSGFXKEDWYKPBHXCSYKFLJOKCWFMGDWJNOPPSVTRVDJHYGFBZJMOMVGVTUMSAK");
    msg.ccount = 44U;
    msg.cnames.assign("PCWCEFXSEREJOILCODAZCRHLHMTAIKBRFTMNJMWQCOYIFAVMXZQSLGXUWFNJHDRIDFKFYJNHNTBNUKMXAXYRLTVXFNKLSLVSUPDDZPXLJCSGHRYGMROGAOPQWFLBUSKBCBHWZPKPUDEWKVOEUZXNLZTQFMGQCJIXDYCIQFMISQWJGZZBOZVWYHIPVVEMJSEKHBGSTSGKYV");
    msg.last_error.assign("DWEKLFTNSHQDEYPUGBSBKSOHIJVKXVUUURXPYKDKRFZZSDHZAQCVTOBCAGCSGZECRSZNUDNXYOHNVSCMALLVDVRBLRNMXNHEWRRHFIZKUFUCBOJKEZMPKWEUTZGGTBXVLMOAIQMMQMOOMRSFAXJP");
    msg.last_error_time = 0.264018311193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.184682023095);
    msg.setSource(53078U);
    msg.setSourceEntity(118U);
    msg.setDestination(59138U);
    msg.setDestinationEntity(65U);
    msg.mcount = 20U;
    msg.mnames.assign("CVCSMFKZRZEUHXFEATGG");
    msg.ecount = 99U;
    msg.enames.assign("KZZVKDNHPOJGVIYDRIAVVQXGOJISANEIDLITEJSEZYMZRGEXEYGFPTJVODFAFVQOENYHGHNSVIKQMXVFQIFCCHSTOPTGKFRUWAGBEYXQZBKQRGKQCHCAWOLWULCHZZKCZNELBPIATNPXSFJWWMDUUBLELUJHMSDNNHRXTPREHYTBIDLDVCQYAUMLRDLMSYLPRUAMKWTCDIQORFYYMJTUJVBFNW");
    msg.ccount = 91U;
    msg.cnames.assign("ORJJRGVHMYZBS");
    msg.last_error.assign("QEAVTSUMLMILOKHZMTQCCLDHDVEUUPMYZDZXWOMGDIFEVKTPBBFCMQBCUSNHWPZYWHHFHDBRNVOVMJDTKDTGSFFRBSUQVWAPJGIRNUECIOJYLCUXXFYHLFEBALNKXFXUOLIRAQRTTAWTFAVKZCRCJNNAGBOWPZRHOFKWULHGZPKWSNLGISKJGXYCXADXEYRDEPJIGDHRMVWBIKSYZKLJBSGJPVQSPXYNJMNXIOGOZCEPQUQBYN");
    msg.last_error_time = 0.143863723297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.993639892552);
    msg.setSource(28369U);
    msg.setSourceEntity(36U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(231U);
    msg.mcount = 111U;
    msg.mnames.assign("FRCVVLNMXRDCOGZXYWCFHSCDEYM");
    msg.ecount = 65U;
    msg.enames.assign("FBQDEEMESUIIZUSMOUORRVXRHOEJLTOVXXQVYBYQWVTGIJUHKHAIPXNBPWDXNTRAQQLZDUTFXLGBJAEWBKAHTXSVZXVGFLLRQFZLUOUBPUHOOCDBNCCPIRELTYCAGAMFLOPNHVLWJYMFKRACBPUMGFMZQKAHDTMIKDGHVIAJBVJSCHANQOGGPVFNFZCKBSPKZIWNSMTDQXSYUJLQZKDNENKYPFRCGTDJHPZJGTERMWWZ");
    msg.ccount = 199U;
    msg.cnames.assign("XPHPIQONMLOFKKNJVYZWLQGRUPACJEKMUVTPSNGCTRIEQHVQKZWJTRBPRITZDBPMCQU");
    msg.last_error.assign("QGUESOFPPGDTYNWQZLTTSAPNXRBJHZVOBMBIEOTOEXMZXUDKZOAYWDPHXMRNHBMLRGKWUVLJVEWDSMMBGNYLCYRDVIKFRNCGTSFZWEMFJDVAPFZMIBKFCS");
    msg.last_error_time = 0.752637892236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.436007548398);
    msg.setSource(37112U);
    msg.setSourceEntity(179U);
    msg.setDestination(25924U);
    msg.setDestinationEntity(119U);
    msg.mask = 190U;
    msg.max_depth = 0.207206693465;
    msg.min_altitude = 0.996836798516;
    msg.max_altitude = 0.0662255566123;
    msg.min_speed = 0.289140270217;
    msg.max_speed = 0.950043778811;
    msg.max_vrate = 0.387600402647;
    msg.lat = 0.731917281194;
    msg.lon = 0.944284915434;
    msg.orientation = 0.696356538589;
    msg.width = 0.881545595284;
    msg.length = 0.186687476252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.199479480229);
    msg.setSource(17624U);
    msg.setSourceEntity(233U);
    msg.setDestination(54088U);
    msg.setDestinationEntity(39U);
    msg.mask = 184U;
    msg.max_depth = 0.409136093046;
    msg.min_altitude = 0.423267957019;
    msg.max_altitude = 0.595885470963;
    msg.min_speed = 0.313301335004;
    msg.max_speed = 0.78610685163;
    msg.max_vrate = 0.147559175539;
    msg.lat = 0.21887285499;
    msg.lon = 0.66167225055;
    msg.orientation = 0.991146645694;
    msg.width = 0.551140499111;
    msg.length = 0.894318414785;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.4503132867);
    msg.setSource(58492U);
    msg.setSourceEntity(63U);
    msg.setDestination(52331U);
    msg.setDestinationEntity(63U);
    msg.mask = 90U;
    msg.max_depth = 0.457334991154;
    msg.min_altitude = 0.740578739682;
    msg.max_altitude = 0.3574462794;
    msg.min_speed = 0.940610260554;
    msg.max_speed = 0.124390897273;
    msg.max_vrate = 0.139748975748;
    msg.lat = 0.617772437013;
    msg.lon = 0.919935992321;
    msg.orientation = 0.153297421248;
    msg.width = 0.519235950627;
    msg.length = 0.142214279705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.520220766802);
    msg.setSource(3793U);
    msg.setSourceEntity(130U);
    msg.setDestination(1537U);
    msg.setDestinationEntity(231U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.115446432375);
    msg.setSource(8349U);
    msg.setSourceEntity(235U);
    msg.setDestination(44691U);
    msg.setDestinationEntity(189U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.919374642962);
    msg.setSource(54185U);
    msg.setSourceEntity(246U);
    msg.setDestination(44498U);
    msg.setDestinationEntity(74U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.306050437284);
    msg.setSource(65090U);
    msg.setSourceEntity(122U);
    msg.setDestination(43071U);
    msg.setDestinationEntity(83U);
    msg.duration = 19589U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.0178952902427);
    msg.setSource(6519U);
    msg.setSourceEntity(75U);
    msg.setDestination(9264U);
    msg.setDestinationEntity(107U);
    msg.duration = 21608U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.155454663107);
    msg.setSource(30396U);
    msg.setSourceEntity(125U);
    msg.setDestination(7460U);
    msg.setDestinationEntity(21U);
    msg.duration = 56255U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.237439494171);
    msg.setSource(27907U);
    msg.setSourceEntity(48U);
    msg.setDestination(57096U);
    msg.setDestinationEntity(75U);
    msg.enable = 39U;
    msg.mask = 3264600254U;
    msg.scope_ref = 1689840422U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.924523036806);
    msg.setSource(45620U);
    msg.setSourceEntity(217U);
    msg.setDestination(23098U);
    msg.setDestinationEntity(38U);
    msg.enable = 185U;
    msg.mask = 609022514U;
    msg.scope_ref = 2458062352U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.626636506581);
    msg.setSource(40725U);
    msg.setSourceEntity(52U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(253U);
    msg.enable = 116U;
    msg.mask = 419323174U;
    msg.scope_ref = 2383921668U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.285087137632);
    msg.setSource(49699U);
    msg.setSourceEntity(147U);
    msg.setDestination(52501U);
    msg.setDestinationEntity(66U);
    msg.medium = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.0383355414206);
    msg.setSource(52300U);
    msg.setSourceEntity(108U);
    msg.setDestination(16454U);
    msg.setDestinationEntity(68U);
    msg.medium = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.592412862398);
    msg.setSource(46380U);
    msg.setSourceEntity(166U);
    msg.setDestination(20864U);
    msg.setDestinationEntity(131U);
    msg.medium = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.362251014272);
    msg.setSource(41885U);
    msg.setSourceEntity(197U);
    msg.setDestination(40503U);
    msg.setDestinationEntity(217U);
    msg.value = 0.361217892291;
    msg.type = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.253333087037);
    msg.setSource(5821U);
    msg.setSourceEntity(87U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(138U);
    msg.value = 0.962910655461;
    msg.type = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.0796910033999);
    msg.setSource(52600U);
    msg.setSourceEntity(247U);
    msg.setDestination(58785U);
    msg.setDestinationEntity(9U);
    msg.value = 0.60356656012;
    msg.type = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.0993616416851);
    msg.setSource(31053U);
    msg.setSourceEntity(69U);
    msg.setDestination(18415U);
    msg.setDestinationEntity(109U);
    msg.possimerr = 0.468706482737;
    msg.converg = 0.163560735549;
    msg.turbulence = 0.122860143765;
    msg.possimmon = 99U;
    msg.commmon = 120U;
    msg.convergmon = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.621198921203);
    msg.setSource(48560U);
    msg.setSourceEntity(25U);
    msg.setDestination(11898U);
    msg.setDestinationEntity(51U);
    msg.possimerr = 0.877065405961;
    msg.converg = 0.399398680055;
    msg.turbulence = 0.435207711354;
    msg.possimmon = 146U;
    msg.commmon = 71U;
    msg.convergmon = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.858739120578);
    msg.setSource(37798U);
    msg.setSourceEntity(37U);
    msg.setDestination(41089U);
    msg.setDestinationEntity(126U);
    msg.possimerr = 0.769930041769;
    msg.converg = 0.878232313687;
    msg.turbulence = 0.63146507427;
    msg.possimmon = 189U;
    msg.commmon = 70U;
    msg.convergmon = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.939347003354);
    msg.setSource(8314U);
    msg.setSourceEntity(89U);
    msg.setDestination(65264U);
    msg.setDestinationEntity(6U);
    msg.autonomy = 60U;
    msg.mode.assign("XNVTOLNXUIQIRBPUMRNRTGMNDOJUJIXKZQUIPDAMRSTARLIPLGNRASAQSAZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.36397194923);
    msg.setSource(24227U);
    msg.setSourceEntity(30U);
    msg.setDestination(28281U);
    msg.setDestinationEntity(90U);
    msg.autonomy = 61U;
    msg.mode.assign("PHIYXYONCGZVXLTMAKMRKZCQCVHDZFPNPCUFMJBHKUOVOWWQORVXXJNBMSTGOJGDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.645619934872);
    msg.setSource(54775U);
    msg.setSourceEntity(121U);
    msg.setDestination(20344U);
    msg.setDestinationEntity(23U);
    msg.autonomy = 2U;
    msg.mode.assign("WOXUTPNTBXSDIOJIXEVLEJKSFYBGDBTBQQDUJLFNMMUNXTFNSKNTZRARPXBWBZWNUJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.242625645674);
    msg.setSource(39038U);
    msg.setSourceEntity(1U);
    msg.setDestination(44399U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.098910041582);
    msg.setSource(41498U);
    msg.setSourceEntity(238U);
    msg.setDestination(8774U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.724875187653);
    msg.setSource(56202U);
    msg.setSourceEntity(190U);
    msg.setDestination(29150U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.124413859768);
    msg.setSource(58100U);
    msg.setSourceEntity(101U);
    msg.setDestination(11712U);
    msg.setDestinationEntity(53U);
    msg.plan_id.assign("YBQSMRRAJMYMNIYZSFUYAEERAISBOIKDCMISAOTNHPCGAWPZPZNJQUMFNPTQBZEJCSBNHF");
    msg.description.assign("IIPHBBOGSZKDLSZBGZBDVQDPNURFFHKJYRXEPPMNBIGMPQUQJTMGOBQRSPYUNCYAMDXEFWSYNPJWZUCIWFMEYTRZVWGALLEVSVMLKHOUAEXFZEBXHAVYWOARCAYUQHTPZTHMEAKOIHWQZNRTAUXUDIQAICFFOCSGQNVVKSYDKWWPLWTGTGQNVODJLOPKFLEM");
    msg.vnamespace.assign("PKFIIDMTCNDWQUZUNZSBYWYSSVCYGGETZDILWYIOYXNABTTWZIGLBLJCLOXLFTQOHNGMOKCNFJCEXJB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XMNACUOXMESZFOQFTJYDKKEGORNNBIGSJRODPXAMESQZQGQLMJZSQFKKVZOLONPVWUHMLBTWRGRESYTCCCJKVZSCJEWYRPXHHYUWPDUFVBDOVJBIESHULQLCVLXTKXFNYAZTXYGGBGDARGKSIKQKVAMPBTJGXYWDDLGQFITHYBHTVHDIHINEMZSRBXUACANCLZUXFPOAFSVHAZWEWCCWNYWKIRMOLMPJOILNDITWEMPZRRJYUFI");
    tmp_msg_0.value.assign("VDNITRYDCICQEOKTZCDDSOXXBTPZWEQRPOQABZOHAMUIAORGHDIQYIWMCTAFWSGWKWDLHYVERVZNQHTXPDGGVSBMWCHNPZCMAYPQWLGJXFFDSFHJTSPAUQTCJCKRLAMCIBXFOGKAUSSFHN");
    tmp_msg_0.type = 136U;
    tmp_msg_0.access = 50U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OGHKDNGEFNGHOMRKLCTZVINOYMOIEGADAJUFGKIYUCLHOEYKDCUXXQLQBPWWPPNUUUZJWFIVSBMWEGVFGQVSSZOAYBRNCECIPWZMJIRIMHVTBAJHWKDCDZLRYTXXDJINULXDKTTAYIUFGTAYHFBANWMJQCZSEPPBQZSKQCODGBMQWSLRDZJRIERXJTFCEPLYRNTVKSYCGTRNOXNPRMSQZATUQEY");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("FNPEDYZNWIYEABATPJTCTPRKBSFSAAFAESXXERXIAODCVP");
    IMC::YoYo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 62475U;
    tmp_tmp_msg_1_0.lat = 0.43502824524;
    tmp_tmp_msg_1_0.lon = 0.987487399416;
    tmp_tmp_msg_1_0.z = 0.109706685338;
    tmp_tmp_msg_1_0.z_units = 131U;
    tmp_tmp_msg_1_0.amplitude = 0.0435212615254;
    tmp_tmp_msg_1_0.pitch = 0.894733254073;
    tmp_tmp_msg_1_0.speed = 0.622031805847;
    tmp_tmp_msg_1_0.speed_units = 151U;
    tmp_tmp_msg_1_0.custom.assign("WJUWRCLWXDDHPOVIUZWZDYHGSXOBDAYQVLQCJXMKDSROSZDKBFEROMGGTFGHIQVNZMCYQRTLVVEDEKNQGMLXTUMXHRAYQJVVZNFHABRESHUWEWFRZJEGXIPSNBOCYOXNXLSEPIY");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::MonitorEntityState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.command = 126U;
    tmp_tmp_msg_1_1.entities.assign("IIHMAODBGNYVULTXVCXFIMOLQNJPUGZDZEELOGCZNKEUYEQIMPJRXBTUJXTYTAUCQYPFACRBZCPMWRATASJSOKNFLWGHTQFVEJYDCLM");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("NNTEFOMBQBKDYSQGZKMIEXOIOHUQLHRDALUHVJRUCOTIVOHJCQHNTLYWCEINZFZJALAGMYAEQSGQVRUULLC");
    tmp_msg_2.dest_man.assign("YMWREQNKDDBURWXONNBCOBUQPSVQULTZTPEGAIJKSYOPCIKSKFFHGRFZHYIUUGQABYCJEYXSMGLVOMRJSFCCUQFMFETTKKRGPNPTZGCNABHQKRGNWIAAZDOOWVMDBCFDXALCFONVTDQASIWRLAEGCFSIWJWBXSEUHDXAXHQOPPVHTEHJYHSRBYGNDEJBEIPZLVVKROZXYTGZVMKL");
    tmp_msg_2.conditions.assign("YDHRGROKKTSIGXUEOQYCPVZXKYSHMZWENWKLHDAZIMTFUEZAJNRCMQ");
    IMC::NavigationUncertainty tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.733430142693;
    tmp_tmp_msg_2_0.y = 0.422795489647;
    tmp_tmp_msg_2_0.z = 0.851538044189;
    tmp_tmp_msg_2_0.phi = 0.292975847785;
    tmp_tmp_msg_2_0.theta = 0.757774832189;
    tmp_tmp_msg_2_0.psi = 0.927847451525;
    tmp_tmp_msg_2_0.p = 0.854190626203;
    tmp_tmp_msg_2_0.q = 0.218867673069;
    tmp_tmp_msg_2_0.r = 0.242817697739;
    tmp_tmp_msg_2_0.u = 0.976348298735;
    tmp_tmp_msg_2_0.v = 0.0900452990234;
    tmp_tmp_msg_2_0.w = 0.594528642196;
    tmp_tmp_msg_2_0.bias_psi = 0.308923630791;
    tmp_tmp_msg_2_0.bias_r = 0.822736254485;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::QueryEntityState tmp_msg_3;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.0426875415797);
    msg.setSource(13687U);
    msg.setSourceEntity(160U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("FMFAHFYPQSHENZAQHCUHCUXSQJBVVJWTYRAZELBCOHAZVKHLIDILBGWXETPSHPOUXFNJWNRTGMYQREKEZQWJCIRETPLKXIVCKSDSGDLNTMTGBMTSROTVNWECQPJGCDVQYGKMRIULLKFZBERWHP");
    msg.description.assign("PAYVLTUBVTQUNUCXPHGQPHESQDHMTJXWRYRFWXKUKQJVKOSSATFKVELEQUOVNLZFOBBTULBODMYTXGPDSWJRZUXMSFICVCNJRHDQOSXKEQVKXGJYICRLNJQIABIZGPAJPOVZMVWYYNJZBKIJTZUCCAKKERDLCWNROEHPGMFHYYEIGKYAAIBUDDTNS");
    msg.vnamespace.assign("EGMKVJLREKSKWPCXACCMYBUAYHQHDOTFRWRPZNGHMDL");
    msg.start_man_id.assign("CBNTLEBSQTYWKTAJYDDZKTRWWEUZJGYCDFJEQZHODXAKNDPGQPTYJAHVMQFVNRKHXTKZY");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 183U;
    tmp_msg_0.custom.assign("ZEZYUFFBIEYDFCXTLVMRTXJUOPJHNPLKYFOTMNIWGIRMTWBWLFAHALSLKMJQ");
    msg.start_actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.850001784779);
    msg.setSource(2505U);
    msg.setSourceEntity(212U);
    msg.setDestination(3922U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("ACEFJYHLRRYZHWCZKRWWFEIIJXGSZNMQPVPFULBSQQJLGQEFSAOCYXEBYAAJAMQVHCRVBDBPSRPHEZEBXHBVZKXJCPSVQNSRKGWMTLIUFGKXVIRLZNFOQLCXZAUMDEYKSDGBDWAEXBCENQVWCOMHJGUYVPWAKVVTMHPDEPCMGMLKTZNQRZLPXGON");
    msg.description.assign("CPLHCDPYSBLWQHLRWTEUYQIHYMAEYAVKSHDUFGFLKVZUSVUINGNHZMZRPNCAJLEGBOYXTHWNCAPGJMNPCEWTNXOYZAEULIKMDJRSTKVVFBDOXJZQKFLNTQFQRWZURGMFJDEXEQRBEIHGPSTSRHYVVMUXC");
    msg.vnamespace.assign("EJUTVPFCUHNEGWLWIQSLUKDFTYAMKOLONLYGEGICYDQTMCMZPRNCYWGXULDJBCGNUWCUEYAANRUQXIQHBFRQBDQHPDYJIVJKWDNRXHAKNGNOHMBBEJEVCRCHPXHMAIRDNEQBERTICYFDSZFFWGGWBVQGBHZZRMAMPJVSWUTEZJIMICXATVPDSPNUKULIHASTQLXEJXSFKLMZKYTDZRPKOKVKPORF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FIYLRJKWKLTEHTKWTOOOZURMPUSSNETBBWTWMIBGUHAHRRYBXICCNIFVQGHNUFPJVUXEIMMQBJFZYEFWTNWKXURIOZVBCLINAMYGZSOCTK");
    tmp_msg_0.value.assign("BTSGEDXMYQCYCTEPIMFCCLBBFIYOBIOBDQSZQPQAILNJNKXWUVAHLPQNEXPEBUXFHMCNPTRJGJSJKUFPK");
    tmp_msg_0.type = 85U;
    tmp_msg_0.access = 141U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YMOVOABFXCFIJAXHUPFSXDKDKJBMLNQBPAOSUNVIWBLBCONWDHYLOYHKAFBZDETIPSVXWMIWUXMZZWLRSGFIMVILJXNTSNEJYTKQIFIHMOCHVWJEWLKDSXSKDZYNBAMATPQRDNFRYUZEHAIQVBKHURXRDCLCOQTPXRGVRGCYTTFQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MXWBJTSAGCZRGJVBUXMJHAKVHJIQDTQOPVNJEJWFLZUCZALZDNOSMHRVNLYTKHYOWJOWQTQVUDLLHHXIXYLEDWAEXOUYDZNPVCHUWFXTYEMNXMCAIMSPLEQZZGYNRWEUFIFFLGBPOFIKGKCRQTZHLPVQYOESHILTSPKARSWDWEDVDQSBBCKNGVGMUVREJFHFRNGTBUSPAFUCUBKOBYQXAKCZQAOZBES");
    IMC::Loiter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 21445U;
    tmp_tmp_msg_1_0.lat = 0.352331961102;
    tmp_tmp_msg_1_0.lon = 0.9374061166;
    tmp_tmp_msg_1_0.z = 0.13234214629;
    tmp_tmp_msg_1_0.z_units = 97U;
    tmp_tmp_msg_1_0.duration = 17078U;
    tmp_tmp_msg_1_0.speed = 0.515807233044;
    tmp_tmp_msg_1_0.speed_units = 184U;
    tmp_tmp_msg_1_0.type = 112U;
    tmp_tmp_msg_1_0.radius = 0.0297312369209;
    tmp_tmp_msg_1_0.length = 0.455345893015;
    tmp_tmp_msg_1_0.bearing = 0.976156383233;
    tmp_tmp_msg_1_0.direction = 113U;
    tmp_tmp_msg_1_0.custom.assign("SFDQQXTQWQHPLUWNXYNBWMIXYOIOXRJBZJYXWVIESDKFSSGWEKJMFCNHRJBLGVSGDBKXCSTBQVDSCMBULOGEOLLTVYUORBEZIZIGZJPGWUXNTTFQKONYBSPXSCLFPRTWVZIKXYTFAWCHGVKCPMECZHZQOXVJNNRZYAREUADBMUJULKJMKEHSLMJFTTPWIEVYAYNHQDPQCDNCPRGQDFGNPHU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.586357180935);
    msg.setSource(2482U);
    msg.setSourceEntity(98U);
    msg.setDestination(15425U);
    msg.setDestinationEntity(228U);
    msg.maneuver_id.assign("GHYMBVERPVOHFLMBCGXTGKXSUYJYFXCEOPZPCKGWIEVPRONECUVKZTHQDTBVQYFVDZIZKUNRIZAHSVLYNXYFWKSYNENXWDTTQKPYJEZGDSBWYUXQJIBNSQZCPULBUADPTJQDITVGMLMLNYTHCUK");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 65007U;
    tmp_msg_0.lat = 0.83640114142;
    tmp_msg_0.lon = 0.762682316973;
    tmp_msg_0.z = 0.537176466702;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.amplitude = 0.858368172988;
    tmp_msg_0.pitch = 0.0925314020763;
    tmp_msg_0.speed = 0.23273123672;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.custom.assign("QAWSGEHYEOLPENQAOAUGMJVSWRALHUAMJHJSKZHUPPCCAMIGZLGIODQMZJMTCFBNWEFQTSPTXYWZVBDYQQACRGZTGQDVMGIPYSDJIUXBPONNUBXDSHXUJKNLFJKLUQZVDW");
    msg.data.set(tmp_msg_0);
    IMC::LblRangeAcceptance tmp_msg_1;
    tmp_msg_1.id = 116U;
    tmp_msg_1.range = 0.0416774869523;
    tmp_msg_1.acceptance = 235U;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.0524918481188);
    msg.setSource(47457U);
    msg.setSourceEntity(138U);
    msg.setDestination(28424U);
    msg.setDestinationEntity(170U);
    msg.maneuver_id.assign("LLJTXPQJKOLNSMAYFPZOBROBMMXXAAGGFCFYCWAHYKUUCRDQATDOSYIVCVLHYVHBZYFEUJTUDRBMQUISC");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.355129093298;
    tmp_msg_0.lon = 0.937897130764;
    tmp_msg_0.speed = 0.575276250066;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.duration = 18504U;
    tmp_msg_0.sys_a = 61062U;
    tmp_msg_0.sys_b = 482U;
    tmp_msg_0.move_threshold = 0.789235131335;
    msg.data.set(tmp_msg_0);
    IMC::RemoteActions tmp_msg_1;
    tmp_msg_1.actions.assign("FDPJGUQZMBXULTZYEHVJGLPYOYHDLBVJXRPNYOTLDFFZUEBCDMIFSCYRVEAVXSJIEPTTNYHQXCUYNWFJXTMKCFQWEXXDRLSBBNLCQRHHBNOGVTPTQUAUYJMKWXWYKSWHUAPVKFPBAHIM");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CrudeOil tmp_msg_2;
    tmp_msg_2.value = 0.905424881702;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.295333267102);
    msg.setSource(20481U);
    msg.setSourceEntity(27U);
    msg.setDestination(711U);
    msg.setDestinationEntity(241U);
    msg.maneuver_id.assign("UMAFBLHMECTFWCGZAGFEIPXVPJUMVNNVOTDNFAOCMQQCPKNJKDRRKSEQWIDHPJFHASDCBVQDZEQFHWZNCKUSYHMSWZXLIZEHQKNMPBZLISYGFPUOOXRILA");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 46569U;
    tmp_msg_0.control_ent = 183U;
    tmp_msg_0.timeout = 0.740433333877;
    tmp_msg_0.loiter_radius = 0.849128156771;
    tmp_msg_0.altitude_interval = 0.305883833625;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.632812918721);
    msg.setSource(57413U);
    msg.setSourceEntity(194U);
    msg.setDestination(1734U);
    msg.setDestinationEntity(48U);
    msg.source_man.assign("NVGVZWKDQMYWICZKOPOAXHVODEFOEQFXSNICNPHSU");
    msg.dest_man.assign("BMKJGLODVIOAWYMTQHEVRIAABEIFSGWPNSVTHHIVLERPAWUZMWUIQTEKWRAMQRYYBZGYUWQKESCBOLPZINSQIOOCRRZXFDBWRUXTJJJRPMYXEVFYLJHDUDLLBWCFXOLBOPVGTHCDYFRHSAFPGYKUNUFDDRNHZVFCBSQDSKHGZEEXTTGQCHOLCEGJPKJNXPVPQJNYN");
    msg.conditions.assign("CAQUNORNVBMCQMXRGGMDWAITZIKOEBVSLUTFFKBTRQN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.849394269492);
    msg.setSource(12051U);
    msg.setSourceEntity(185U);
    msg.setDestination(49239U);
    msg.setDestinationEntity(43U);
    msg.source_man.assign("ENSVPVACGUXYZQPJKCIBYASTOMEKLGKKJSHOBUBNPKUZADRENDMBIFXVFHAIKDYHMFRONXMGUSYQCXGWENRANBOTPZTECGSOMJJRVVHVQETVZXEDCQSIMPUDEJLBACAFMWOTJIGTQGHZTVUHLYTODFRRKKRPIYTWZGNKDLILHRBDOFFIQYBLRIMOJJHUHVVSMYZPANJPLSABCWWCTJXLUBFWXXQ");
    msg.dest_man.assign("DLKCQOTFCPJNGAKWWVSDVRSIWYXSYYBRDFHIDLQGMXUHCRFCGEILUTVKLFQJVTUUFJCUWOCBOJWFVHTGSYJGTNBSESKZIKUDFEMNUIEUHGBFQYZOYADNJLPPHPJMGGAAQHTPSBWTKINNOEQILVFBZSMGP");
    msg.conditions.assign("MJPQYXZNQZHPOJXQMWNKBAMCJZSTIZKIJLTXPVLRMTFFXDLEKIFUDJPFEXUPXTMTFUWJEOCRBWEUCBNGYFMAPUDPYHJCOPHVIEWRCANYRLIILYDGRCRNQBPARK");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.466485908061;
    tmp_msg_0.lon = 0.434925243152;
    tmp_msg_0.z = 0.393804348479;
    tmp_msg_0.z_units = 229U;
    tmp_msg_0.speed = 0.503347100604;
    tmp_msg_0.speed_units = 16U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.858942303636;
    tmp_tmp_msg_0_0.lon = 0.144734919853;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("TSKZRBAGIFGMNROXEXOQDGSOFSGZHSCECAFNDTWQGFHJUIJRKTICGXQHVNVGEDCLSWWXKTUFTEUJNDZGBYJIMZTIMKPPWPFIQLONGCEMEDWUYUQFHIBLACLCJQHBAXFAEYZVLLMOJ");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.490731705968);
    msg.setSource(17514U);
    msg.setSourceEntity(124U);
    msg.setDestination(24894U);
    msg.setDestinationEntity(123U);
    msg.source_man.assign("QUDPIYTHVINDBSSXUKVHWLKUBTIFYGTSWZQZXSKTZOPGPMMQGLMCYLDSJFSPHXLTRFPHXUENMXUDEPLDCHJPAROJUEKIZMKYWHCNFSTZGRPEGGEJQBCHIEIAZNDFMUWAQVSGRPBOQLCTEUWNJDXVNGIPNOXAMOJJWXCKYKHRTLGZAUOXBVAFKRQISBLFRRFAVWJBUNMOWDCMHYDQLOZVTDVZSERCAVZERCEWMNKCOBA");
    msg.dest_man.assign("XVGADHMCPMFUSGFIRGFQDPFNTDNZTYTUFBPQMLIECFWJWSLSUPHZWQIHMUXEYXYABRTPOGECXOGMPPCKVKRJMGOYRXVCAVIOSEEODAJSHOFYMIEZJWASOCXKAHJGRKLGVDNGAAQVBIQUTKOVHIXYQCVUEUILHDYTCLWTJZRKPXFJRQ");
    msg.conditions.assign("MJXSJVIDGFWEFKPULRPAUQSYPEHOIGQZJSJRBLXVJPBRWHPZMYLERAMAKFCFKXOZXJVWLIOMMQNQWIBFFZDQXPOETKOEBFELCHXUOTURWNXKVTWGVCBFYYRCQEAFSRIHMUGHDUBHLWMUCHIAHIEGMOYYOKGVLLRYWDNHNZINBZEDTWHLSAKLAQUGZZADNIGQSUZXIVUXRTBNDDNCCNWQYAJTKOPZGYVJST");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("JEWXKVLKGDHQPSBROBQOHOQIIJLQHZUZBDPTKWIWABNGKM");
    tmp_msg_0.value = 72U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.590150853849);
    msg.setSource(20180U);
    msg.setSourceEntity(125U);
    msg.setDestination(17324U);
    msg.setDestinationEntity(242U);
    msg.command = 43U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TJRPTPVCAJISLSOOFJDVRKIXOJXFXMMEAWAOHEBAPFHFAWJYSXTDTNTEYYRGRILDCGXFMLVZTLJAAPLYEZZXOZNVCUPQYWBXCUSZGJUISZOFTQOWVBIUEEBTXNRHIUHKKONHBYKPNSWNAYYZMUWGGLIQRLAZHXFHWFFILCOITWQNUNENOCQYEUK");
    tmp_msg_0.description.assign("DDWGIPCDTVKNMDFIXTLXCZLWGNEIPXOZEHURIQJPMXJLFFHCXZAGGOPSBOKKLDLYNUZYZFBUGSRUWKVQFXTJEWLBOKHYPDKIZSARAVRQQJEABEXEWWCYJACNQFJRMRYXUTCEZYTWKMLIMRSDYPLRGTCFBIU");
    tmp_msg_0.vnamespace.assign("TUSPNZBKFKVQMWHMZVYRHNSMIVJOLAHLCZTPFWNVODJQSLIZDGZBQKFNLDCKSROKLJYWRVTNAZGTRTFGQXGEXCOQJKQTBOMZVDPPJBBRJPNORPCNXWQHEFZIMGGXACLXMXPMWTIRILHTYUJCGANCEKLBAWKXEOPFDESYAYDMRYMGQCZUEBW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ATFRJVCDYYSMPOELEGSZHRNPLCDPBVUYHB");
    tmp_tmp_msg_0_0.value.assign("FNRWYFNKRT");
    tmp_tmp_msg_0_0.type = 105U;
    tmp_tmp_msg_0_0.access = 158U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IOMICBIGFIYLNSPILASERYUNCQHAMGXZVQFEFDZAMKENHXSWJENZKLXMVYMTPVTAOVZBQJZRTRASVDJQNSPBGQQCPDWEZZWVEGBKOFDCXYORRUSTJJAFLLBUUNSRYTSTCCVXYTVZIHQLRIQFZZJWXCKLNOBBJYKGSKDHMNGTHUMYPW");
    IMC::DesiredSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.30769009433;
    tmp_tmp_msg_0_1.speed_units = 24U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxFrame tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 86U;
    tmp_tmp_msg_0_2.sys_dst.assign("LTNCZDLCNGQBTQPASUIHALEJIBBJBFJSYRYXIWSTSKEFDTUREIFHUIFQYLMHAOSRMUUEMYSCHIHCQFEXXFNDGCOWFBARD");
    tmp_tmp_msg_0_2.flags = 2U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {-92, -92, 31, 35, -19, -39, 38, 94, 112, 43, -68, 22, 32, -88, 114, 7, -121, -117, 73, 83, -53, -18, -61, 30, -74, 79, 110, 80, 30, -95, 88, -48, 74, 31, -118, -122, -117, 24, -100, 3, -63, 81, -50, -127, -120, -20, -1, 57, -93, 55, 107, -39, -59, -65, -79, 14, 99, 70, -38, -115, 97, 72, 6, -72, 25, 0, 104, -87, 91, -11, -17, 38, -6, 74, 12, 11, -47, 59, 118, 70, -67, 34, 25, -75, -70, 107, -102, -49, -61, 14, 50, 77, -113, 25, 23, -42, -6, -112, 123, 126, 83, 89, 29, 121, 26, 114, 53, 33, -52, -25, -23, 76, -26, 124, -90, -120, -96, 124, -6, 94, -100, -100, 13, 1, -103, 26, 125, -83, 87, 20, -44, 72, -74, -74, -8, 10, 66, -90, -66, -45, 121, -73, -16, 63, -105, 2, -121, -112, -27, -42, -83, 115, 77, 81, 107, -16, 41, -46, 81, 39, 30, -42, -77, 44, -10, -80, 75, 45, -53, 67, -62, -58, 9, 51, -117, -83, 34, -125, 59, -96, -49, -76, -128, 68, 118, -101, -59, 96, -86, 119, -106, 16, 58, 73, 47, -119, 79, -41, -45, 123, -42, 121, -50, 14, -89, -117, -74, 26, -122, 92, -49, -11, -52, 78, 92, 72, 78, -128, 15};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.598811227126);
    msg.setSource(48230U);
    msg.setSourceEntity(0U);
    msg.setDestination(20059U);
    msg.setDestinationEntity(133U);
    msg.command = 56U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UWELXADOYBSYMAXQHPZHKTUXFKSZBCOYHADCUGCBVMSRQETCSDCMFTIRQNKPTVARJSFYXSQSNFELTGDHJTRCNDAHUIPTHMWSCIPOUDYGYPPGJMSOLUYEUQXWJOIZCJZYPLGYBKLZIJKXOVOGEIVYJVIUUVZJDMSQKEIFWFG");
    tmp_msg_0.description.assign("PTFXQRFWWZSYYDFVBWQHPYICRFERVKJQRKRLCIGIJZKIBCIAHOKJQTUXXPERVGGNYCEEMXDVUFNYBADVODUJQHHYULSUZ");
    tmp_msg_0.vnamespace.assign("VJPMIPHYYXHIDSVYOWQKKPVWXBASFGHJDBGONOCFJESYKPJVJKBHTUMKFTUGFGMRJBGZZDORUCAFNANPICAINNPTOVTWDALSRAJEMWGLYSFJRXHLEXWHTDZIRHVLUYXQRNFMIQNWBYNRCBDXMDRZVQAIODZXQUJABKSUTWSGTILEXEUHSXKBWCELZNFMODKCCHOZ");
    tmp_msg_0.start_man_id.assign("KZCEALPOJFJHGNRMNGIFBEAJSVWHZCTVRCLEFEKEVOITUKWZAFKXGXRPHEIXTKQNDBYTOVXMRBEJKMFLYHQLDMODYXBTCVQTZUXHIVADWNOHWBSWAKZIRSRMACFZIPYBWHCFXNMNZNUPLWIOVHSYUPXYYVHUYSGJOQJCPVGOPIGSZQJNKCLLJAGAYFJSAUZZXSCLVRIQUKDMRFMXWAUNQGDBYMGSQFDWEDPDEUNITC");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RKRTUVKORIMTCCTZKXOHXSJDUYUMSYADRAGCKKZGSZOLQBODNFVFSGELRVEBHFRGIFJQCHKXBTQFDBAPGOFVVLYLVIGRIKZCAAJMDPBDEYIGMOJNMRUUDLAWXTFNXHSIQWBPVWYIKPNXYRVMSBYNDWPJTQQMEMKRLNSGVXMHZEKUZLCIWAHLAJCCPCTUOSQSWPIFNMBHBZLJLZPGAQZEGWZUPQPXUCHXBIWYOJT");
    tmp_tmp_msg_0_0.dest_man.assign("PIPHNLYKQOIYRTLTVQFAUCRPWVWFUQAGLKKPYYOYHWWABXWLYNNLWRSKGWMTELMDXFHSCWDGGIUEPBBVVZXSISNEMCBQMVJEIDLJLZOGJSYTAJUSVKCMOAPQXJZDZNCHVVPXGZKTDNCNEFMHBUJKXWSFSCOMNE");
    tmp_tmp_msg_0_0.conditions.assign("FXSSICQTVPZDPRPOJUQOTEYJHUCDPRIGJLFNMQXPDRNLBWYCMIWQFAZLKNZGHXCDXJTOIBEMRMGXDVHNGCWSZEHAIMHKYQPFFLTBMWRZUKKZOFISAHGSGRCBUJVKRYKUQPEBDPGTHNQUOZQAQODAESGUFWVNTEWZFWCALGOEITWFRKNAZHIKKDBDVUYBVSWILLPMCJAMJYODQRWSYVKJHOTXVNEXXGLBTNVLVJSRZFNUHEC");
    IMC::PushEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("RVJXYTBLKVNRISHZQQEMISOPWCXTIYMDCXGVZEFVNCVDCJDCKNWGMYYHZMPDRZFIZOEYALZJNNUSWDPEJLATQTJUBHWYNXBMXJTMVRWAPSDMGFFUAONXDPCBQOLIUTXVHATQSCSBHRMREDSADRJHRHEBVILUWQPIGVJE");
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.18374551433);
    msg.setSource(18729U);
    msg.setSourceEntity(104U);
    msg.setDestination(53161U);
    msg.setDestinationEntity(145U);
    msg.command = 173U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YVXDLJEVYXVZJOYNIYAFRPQOTYNZISCRVLGBTPTSBVIKXXZCGHHBOEDOHWPHQTTCELRPAXVWERQAXZNKIXHMMWJGPJLJWRMIWFOLLRPIJQNQCXSIBUGNONSADFWRKYNSFQRPCQGGXNFAWDALLGDKBBTKYKETJFASMHM");
    tmp_msg_0.description.assign("LTDSKGSWRLFYJJOMCZADVWGAODUKOOUYENUTJICWUHXKZPKGTBGQKCTGRAXORDONABWYZQTSLALQVUREZVDGNVHMVLLWJJSVFFMHAFMNNEBCYPOVJJPHGYHCHXBHYZIYHIIPQNXPFCBMQDBEQXMQMSQWFMXZDZYJWRBSDEDFSXNYOVLQRWLUTGKWKGPHVEXPPQDAAUTREILACNPNBKCZTUFEIBLTNMEBUOATUYMIJVEWFZOICJKIIG");
    tmp_msg_0.vnamespace.assign("EBKDDQJJPXBMDFEPGVTQXPOIQNBARGBISNYTQROPSXHPOITIUSZXHYVAUJKQBRKFTFUSTQRHFAXZVLYGUCHMWYKKNLLWXJYWHULWLBNRPEIQDSJIMDKUNAEMOVECCUBDYOZOJVWXWCHPUTCYVFZQUDCGMOSVGRMEEHTCAOTHINFQFCIYZVNLMCSCFRGAFDBMPGRLSQPZZJKGSMRPLNTBZMKD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SGQXJZHFIFEOJMNGMKPIGKXCMBXQFYVWWPZXQTGASJRFZMIHUZLTYLDNECSFDYXUDMPAMQEHIWOAJZFNBSVWNUTSKPGBJESTVWJRMGAQVCXPVSCWYBCFQSKBGDKXHKICYTIOVOBEJODIABHDNTBVRS");
    tmp_tmp_msg_0_0.value.assign("XUSSZUTBGVCVQIECOVPJVJSUWPOSFZNHTWFTIHJGXMDDDTIVBYHKRUFHCWHWYFPLTNBNLIVIOONAXLDKOEKQSRLDYQXFWEDKRGCZPJBMLDBCVLOEIKPHLRHMUGFNMOOLCITYBKMBZMCWXYENVGXNYGMSRQABHGSRFQUJEXTOQFMNYRDTGMRCSVQPAJSWEKEGIEJQZAUAFBCNY");
    tmp_tmp_msg_0_0.type = 87U;
    tmp_tmp_msg_0_0.access = 218U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BYMPIDJCWJUJWHYWUCFNCLWVSOIZWOSNUQRAZGIEEFYLOPXBSDPKQRFAUHMIOJRJPMAGGXUAKCNXLSFFRTCVMNKXNJBAZDBOBARMIZZBNTIVTTOV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("XAIFAYOTNEBSVRXDJSEJGEFRIYHUROQEDBUDWHBTKAMFCSVSZZIAGKPZFSIGECXMVYPGUZQODIBNMNQBIEVUURJAZCILYTBXWKQLRWOYWLPRWRGWUTJLFGEFZBQKDPPKOUAPMFYZJHYHOCDHOOVPMLBZVCDPONKVJUKEXXLLMULCETCSFMIYWKCTXDQA");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 62657U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.492131772222;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0565158602403;
    tmp_tmp_tmp_msg_0_1_0.z = 0.698667291165;
    tmp_tmp_tmp_msg_0_1_0.z_units = 75U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.00403627067803;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 68U;
    tmp_tmp_tmp_msg_0_1_0.duration = 58330U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.759702642319;
    tmp_tmp_tmp_msg_0_1_0.flags = 230U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XVPYAJOGFJEPZORWUFCSMICIFQXOECJKPNNNLFYRZKYAYQEAUXXDQBQVDZVDRIBN");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TrexToken tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeline.assign("CEQHZPCLHDDDD");
    tmp_tmp_tmp_msg_0_1_1.predicate.assign("LVKNURWFYAVDRBZSBRLPVPDXMSMXUAOJJKLUDRRXFMKMEVYNBUTGGRGYZ");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Reference tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.flags = 78U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.value = 0.704515932017;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.speed_units = 219U;
    tmp_tmp_tmp_msg_0_1_2.speed.set(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_1_2_1;
    tmp_tmp_tmp_tmp_msg_0_1_2_1.value = 0.0294865435197;
    tmp_tmp_tmp_tmp_msg_0_1_2_1.z_units = 112U;
    tmp_tmp_tmp_msg_0_1_2.z.set(tmp_tmp_tmp_tmp_msg_0_1_2_1);
    tmp_tmp_tmp_msg_0_1_2.lat = 0.81767657605;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.890921629432;
    tmp_tmp_tmp_msg_0_1_2.radius = 0.310318324526;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("WWRHSHRFZQXXZOGUBCXALMLWUTHCQEVWQLISJWAPHOAOZPVAPLACGBIJIRRCXRYCZVOKZGJUPUIBZMLRNVNEYERIFIBKJEJQUYABMKTTTOFFNOYKQTVKMACFUD");
    tmp_tmp_msg_0_2.dest_man.assign("UGBFVNZWHXGCBIVCHOYZRKBEXIAAVKGOIAJXNSVKPOGEHVCBOPLZFSSPZLMBEEGATBURWPDOXLOJWNNS");
    tmp_tmp_msg_0_2.conditions.assign("FJLALARULFZKYCXRQKLFJFUFIKZHZVGEGJQZRENRGCWUIFMORSJQDPCKMVUFSETHEXHAXKLJCCAQYVTPUQOBVIWPIWJPSVIWBEKADOANYSWQABDOCLJUBOAIXKMGLSDGHZFUGEDXYWQZXBT");
    IMC::SessionStatus tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sessid = 1690808107U;
    tmp_tmp_tmp_msg_0_2_0.status = 95U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PlanVariable tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("NWXYLIADRGWYVCDSBSGFQKNKRYLUGGANQLDTBBOYKJUXQFHDZCPMLIIMEPPZJBYCRRXNLLPAHHDRSUQROBXRSBJOSBUTH");
    tmp_tmp_msg_0_3.value.assign("PXWXWAVCQUVHZBLWTLVNQZGS");
    tmp_tmp_msg_0_3.type = 16U;
    tmp_tmp_msg_0_3.access = 38U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.657041998218);
    msg.setSource(4877U);
    msg.setSourceEntity(153U);
    msg.setDestination(41684U);
    msg.setDestinationEntity(90U);
    msg.state = 144U;
    msg.plan_id.assign("EHELABOOIVSZDIUQVUMFEIKWAKTGZYHKTEFPHHIWYFVNLMQFLOCMOYZHXNARNBXFZKRRQEMHSVGXBAEYBTABSLPNZTGQSDTUCMCGJTVRSXMJWDUEXJUFKVCDXYFWNCASLXSYMR");
    msg.comm_level = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.382061971898);
    msg.setSource(24127U);
    msg.setSourceEntity(82U);
    msg.setDestination(29114U);
    msg.setDestinationEntity(232U);
    msg.state = 208U;
    msg.plan_id.assign("ZTKXMNOPKHUWYUDGRWYFBCVPZSARDYFEKTHRVVRHQVKCNCRPGTSHGLHMHMHQGJCTJNLBPLXUZIWLBIMFJGAKQSDTIUZTOSVLWMZEJHXIBKAFHPAKNLLSJBEZAQCNIOEGSU");
    msg.comm_level = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.0213108241176);
    msg.setSource(33729U);
    msg.setSourceEntity(74U);
    msg.setDestination(56556U);
    msg.setDestinationEntity(11U);
    msg.state = 200U;
    msg.plan_id.assign("UQTBWHLLUFDXMSUFZPNPCNAVINRRDZSAKGVUNPKSGMDKIXEIMFGJHBBAESDSWCHZBPCVZSYKEIDUQHNZPAVRWTORBXGAYJXZRTLFTFPVYHGLPQPCFTNEDXFATNMWL");
    msg.comm_level = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.379775678331);
    msg.setSource(31085U);
    msg.setSourceEntity(34U);
    msg.setDestination(59572U);
    msg.setDestinationEntity(218U);
    msg.type = 119U;
    msg.op = 215U;
    msg.request_id = 14080U;
    msg.plan_id.assign("TCRGPMZUTEXOORCTJALTYEVBHUMCJTTVUECRURNQSDVCDJQUKILELPYGZYKADIBMQGLVPSIJLRSTHPBCQZTPJBWYPKIMLYPVKBMNXDALNMKIFOHDFQMEARHANGJKBBMVWFIEGONKQDFROASVXFDWAHPWEOGFAJDNFBJNIXHXLZCXNFRRTNZQAEBLCH");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 234U;
    tmp_msg_0.clock = 0.472780109814;
    tmp_msg_0.tz = 74;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NETRBMOBYGFXUDIZBLKPWWITGAKEQJNRGVCAMLSGYIPOYORUJHFOSJYOPCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.451514977803);
    msg.setSource(55826U);
    msg.setSourceEntity(216U);
    msg.setDestination(13567U);
    msg.setDestinationEntity(0U);
    msg.type = 33U;
    msg.op = 76U;
    msg.request_id = 28473U;
    msg.plan_id.assign("OZMWYOQVKFEERYLAJPLECJVWQSTZAGLQDIOYTWNDCYUTLJKAZXDTLBIOBIMUPIFHNRNUMSIRWNOSZDYUFJUHJVQQHRSKHNBMETKMXHJXEIYFCVJALDMDKEGAG");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.137974237868;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZWLFMGBLXCZUFHIVQFJHSOVAKMWUVBXNBOJSYWJXDIZYXTTSCRCUQFXNAYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.202361684529);
    msg.setSource(39715U);
    msg.setSourceEntity(219U);
    msg.setDestination(50937U);
    msg.setDestinationEntity(164U);
    msg.type = 38U;
    msg.op = 67U;
    msg.request_id = 62204U;
    msg.plan_id.assign("CULODHUJPPTTFYATSKHKAWOVPDIPAOPYMBJSSUVCHLKOJNSGYTGYBXXEFVJMFCGHWBROAYWROULRWUUEFZWQIQFGCKMFVWRABDXMSGNEDIQSXSKRHEJIQTZYVTKGRWDVCTEXHDLWAWNOHMP");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.273052802009;
    tmp_msg_0.reason = 17U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CRSSFDWPIZNAAASLPALXMGGWKTMUTNVKLJFGCFQWOQXBOTOZTECPBVCDOYMPTOLHDYOWMSAWDKFEKIGCJDYFMPGOTFNKBUYXATOSBDLVHBZMCJRBZBXBKVXPFNYQITCELKQDVVBWJURYZYSABQNWKRXEVZFUNRRWJCSLIZUJMSJPDQSZUQAEGJMOHGXHZUXGRJOFYKGNGENULEQIJUTZWEPIIVYILPHMHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.577434838897);
    msg.setSource(49816U);
    msg.setSourceEntity(119U);
    msg.setDestination(21826U);
    msg.setDestinationEntity(99U);
    msg.plan_count = 61186U;
    msg.plan_size = 1963578569U;
    msg.change_time = 0.442907769602;
    msg.change_sid = 1208U;
    msg.change_sname.assign("UNTSDBJQRSKUPEYUSWUKIEZKFWKLLVOAKRLXVCKVENEMJ");
    const char tmp_msg_0[] = {8, 64, -18, -30, 31, -66, -6, -43, -124, -97, -78, -103, 12, 48, 115, 126, -128, -73, -70, 41, 36, 74, 97, 99, 34, -124, -69, -65, -113, 59, -30, 55, 1, 32, -26, 107, -126, 18, 99, -30, 121, -82, 27, -15, -63, 56, -99, 120, -14, -37, 123, -101, -113, 32, 26, 0, -88, 9, 126, -86, 4, -50, -77, -84, -4, 100, 124, 54, 55, 107, -71, -58, -125, 81, -73, 80, -44, 83, -82, -9, -118, -24, -120, -92, 26, -94, 38, -91, -62, -6, 1, 108, 49, 25, 92, 28, 84, -121, 46, 1, -31, -90, 42, 70, -88, -62, -11, 121, -52, -111, 89, -82, 16, -99, -30, 107, -81, -8, -38, -127, 71, -60, -61, -34, 86, 8, 1, 23, -57, -22, -36, 92, 16, 58, 35, 26, 4, 107, 64, 116, -52, 100, 118, 69, -76, 14, -23, 80, 63, 46, -118, -105, 93, -128, -14, 82, 41, 98, 90, 46, -123, -126, -4, 2, 37, 115, -79, 77, 19, -6, -84, -124, -55, 12, 71, -80, 58, -39, 22, -3, -6, 117, 54, -121, 45, 117, -104, -79, -121, -5, -103, -38, 117, 87, 95, 1, 88, -22, -65, 14, -70, -26, -11, -98, 96, -99, -51, -106, 95, -63, -108, -117, -67, 28, -37, -67, -20, -76, -26, -29, 46, 124, 14, -26, -102, -8, -9, 82, -9, 123, -84, -117, -112, 32, 123, 23, 100, 75, -43};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QDEXEEDHVUY");
    tmp_msg_1.plan_size = 24964U;
    tmp_msg_1.change_time = 0.769039948952;
    tmp_msg_1.change_sid = 31671U;
    tmp_msg_1.change_sname.assign("QZIRXJWMGCCUSYMEOWHHVXVTCFJXZKXBRKJNMKPLOWARDEXRYCOZBWZLLCPGUFZQUKCQQXYXRGSYPINGOAYTYYBHBIEAEBTPDFZULIPRPXHMWQKDLNWIBLCHPUWIWQESDTLMNUBT");
    const char tmp_tmp_msg_1_0[] = {37, -63, -28, -15, 63, 24, 73, -102, 72, 35, -82, 75, -1, 120, 10, -58, 90, 7, 64, -109, 101, -89, -30, -37, 9, -12, 37, 104, 30, -20, 42, 7, 114, -87, -92, 53, 105, -110, 100, 59, 119, -40, -42, -31, -20, -118, 73, 36, -73, -38, -28, 126, -101, -89, -86, -78, -83, 10, 25, 80, -84, -14, 64, -116, 104, -98, -101, 105, 105, 24, -101, 1, -52, -73, -1, -33, -58, 0, 72, 15, -68, 46, -70, 33, -75, 106, 39, 110, 27, 66, -58, 93, 102, -82, -40, -10, 102, -38, -90, -78, -5, 37, 38, 126, -42, -9, -31, 49, -7, -115, 22, 48, 15, -100, 109, 50, -69, -58, 98, -47, 78, -9, 38, 96, 39, -86, -21, 42, -29, -52, 76, 118, -122, 30, -101, -127, -41, 40, 125, -12, 11, -69, -72, -33, -108, -45, 42, 35, -122, 6, -114, -103, -124, 74, -10, 113, 57, 7, -123, 95, 76, 32, 61, 54, -68, 33, -11, 103, 110, 5, -86, -76, 83, -35, 113, 36, -92, 41, 34, 68, 17, 36, -29, 110, -110, -94};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.0965846898437);
    msg.setSource(21194U);
    msg.setSourceEntity(95U);
    msg.setDestination(56780U);
    msg.setDestinationEntity(100U);
    msg.plan_count = 14124U;
    msg.plan_size = 827108297U;
    msg.change_time = 0.0853666360039;
    msg.change_sid = 33928U;
    msg.change_sname.assign("NJMVHOEWCXZWHBKSIQCIWCQPKKHMHQTVROGLIELEVQESJNSRBPATBLLKSJOYZBQNAGPTXHVKWHUGKZMDXIOXUFFVYNKUCCGJMSUDOYZIMWSXAVJQXHLSYIVXCRAPFMXNIBUSDHLTZZBZVPAZUNMLSPEXNFIHGETEIRFNWCYBXRYKTGOMQBHLUALMAGUTRDWFYYPBDJPRPEJOUDQMDAVRBANKOSDTOICAJCZQGOF");
    const char tmp_msg_0[] = {-79, -94, -15, -111, -59, 10, -127, -109, 13, -32, -92, 31, 99, -30, 36, -32, -79, 48, 108, -21, -108, -34, 122, -105, 18, -106, -50, 96, -22, -50, -49, 48, -9, 6, -103, 99, 82, 82, 112, 81, -12, -111, 126, 21, -47, -95, -23, -45, -115, 40, -111, -90, -1, -35, 20, -42, 120, 1, -19, -60, 121, -57, 30, -119, -72, -4, -24, -96, 59, 95, -3, -114, -92, -61, -9, 93, 45, -123, 113, 97, 60, 20, 97, -93, 90, -99, 21, -5, 113, 103, 57, 126, 98, 61, -1, 44, 27, -49, -104, 121, 20, -123, 114};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.295708060763);
    msg.setSource(24271U);
    msg.setSourceEntity(121U);
    msg.setDestination(38651U);
    msg.setDestinationEntity(152U);
    msg.plan_count = 53220U;
    msg.plan_size = 3699433665U;
    msg.change_time = 0.373106738487;
    msg.change_sid = 8742U;
    msg.change_sname.assign("PZOQMUVYQBNXAQCUBAFZPXEQGHPJTEOZWOJQADHHBWBHNCRFBJVL");
    const char tmp_msg_0[] = {-38, -74, -30, -95, 44, -54, -1, -45, 24, 96, -90, -117, -101, 49, -9, -62, 61, 47, 65, 70, 98, 119, -23, 80, 109, 0, 97, -107, -115, -106, 91, -13, -114, 105, -74, 44, 109, -79, 17, 75, 42, 9, -125, 89, 71, -25, -84, -12, 117, -56, 8, 10, -32, 69, -100, -1, -100, 49, 18, -92, 71, -98, 33, 58, -68, -11, -2, 10, -32, 24, -67, -112, 49, -52, 46, -54, -69, 124, 56, 66, -6, -19, -38, -53, -93, 34, -27, -51, 112, 38, -80, -90, 109, 18, 80, 90, 69, -31, -69, 113, 29, 109, 18, -61, 94, 99, 51, -78, -76, -9, 90, 52, 60, -21, -27, 50, -86, 93, -119, -47, 26, -85, -69, 47, -105, 39, 67, 7, -39, -51, 46, -88, 11, -42, 64, -112, 53, 126, -54, -118, -85, -80, 72, -82, 25, 29, -126, -4, 65, 43, 96, 97, 119, 96, 44, -115, 113, -46, -44, 58, 68, -35, 4, -44, -24, -127, 40, -14, 101, -111, -69, -38, 27, -12, -110, -52, 114, -42, 110, 52, -68, -87, 61, 108, 126, -14, -37, 42, 64, -71, 1, 125, 35, 75, -25, -96, 2, -78, 8, -5, 88, -15, 101, -99, 38, 28, -62, 16, 49, 45, -8, 118, 124, 8, -3, -110, -59, 26, 121, -79, -40, -66, 118, -44, 22, -31, 76, -3, 116, 119, -50};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.261806009159);
    msg.setSource(26256U);
    msg.setSourceEntity(86U);
    msg.setDestination(45318U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("INBNEITGAJROUEWHBELWPTFSITUXADQCEFTHMWFTQJHKHPPOUGZUBPQQRDL");
    msg.plan_size = 45424U;
    msg.change_time = 0.679013272227;
    msg.change_sid = 60355U;
    msg.change_sname.assign("YSHBGSHRHRRTMKQTSWQDCRFOJNAHSXBNOUTYCMFIKVSQNMUOHBEZLGQAXLEGGRBVFTETWZYSCJIPEZLTECCKNHANYCBWUPRNLVXFJOJJQKPZZESUKGOMDKALKJXRIMVJKFXPJQTPJCBUFFWRXADMGLKZZARTSGALHWAWAPXGQIYVIYRIFIOHOIZZODEVTTKBUHPFXAYDD");
    const char tmp_msg_0[] = {-44, -120, -75, -10, -71, 16, 20, -44, -82, 8, -70, 3, 106, -11, -84, 2, 125, 7, 41, 5, 92, -19, -86, -7, 74, -26, 26, 16, 119, 8, 52, 8, 38, 14, 11, 19, 90, 10, 82, 49, 77, -22, -86, -36, -110, 98, -68, 38, 96, -9, 0, 80, 22, 10, 56, -119, 18, -24, -73, -78, -20, -54, 85, -41, -47, 54, 82, -49, 72, -28, -51, 97, -39, -18, 7, -62, -31, 66, 63, 72, -107, -60, 59, 84, -10, -39, -88, 124, 55, 30, 8, -58, 108, 1, 80, -40, 76, 8, 126, 31, -110, -78, -69, 57, -127, -124, -106, 107, -102, -63, 73, 19, 58, 45, -109, 117, 74, -23, -81, 34, 113, -22, -107, -113, -39, -105, 92, -93, 30, 118, 19, -37, 30, 79, -94, -18, -40, 83, -104, 49, 121, -91, -25, -101, -56, -28, 97, 106, 84, 28, 111, 74, -48, 124, 111, -89, 113, -94, -1, -86, -56, -55, 99, -35, 44, 106, -112, -74, -30, -53, -36, 90, -109, 90, 30, 112, -118, -101, 120, 39, 102, -7, 118, 73, -5, -123, -22, -32, -91, -26, -32, -120, 32, 95, 20, 89, 37, 49, 62, -2, -1, -80, -33, 108, -128, -62, -25, -32, 22, 125, 84, -72, -34, 108, -56, 104, 122, -117, 64, -94, 97, 67, -45, 66, -112, -64, 39, 5, 22};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.895580610745);
    msg.setSource(27983U);
    msg.setSourceEntity(202U);
    msg.setDestination(49703U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("LXKTITHACZEIIUIWNWJYGXXOZBTBPSAPNNACRKBWUTUCPMSETZMOJQYK");
    msg.plan_size = 17262U;
    msg.change_time = 0.951089684985;
    msg.change_sid = 59591U;
    msg.change_sname.assign("TWIBMRHMGKFXABKJZDGOKPEQAPICEOQYHMBSSSAQPNVVYWTULTOZGLUBZRVTTFFXRJATZLSXHPOZGWVHWLD");
    const char tmp_msg_0[] = {-107, -12, 14, 46, -98, 22, -28, 121, 33, -1, 62, -114, -66, -100, 67, -101, -10, -9, 115, 118, -63, -5, 104, 99, -28, -62, 100, -70, -107, -12, -111, -62, -12, 28, 120, 41, -36, -23, -6, 91, -55, 81, 40, -109, 85, -90, -12, 23, -83, -58, -70, 29, 8, 22, -58, -124, 1, 120, 116, 30, 69, -120, -38, 38, -91, -28, -71, 93, 25, 79, 63, -95, -29, -90, 96, -85, -71, 62, 58, -1, -34, -114, 98, 11, 3, 44, -70, 63, -85, -4, 54, 34, 31, -119, -77, 53, -7, 79, 126, 100, -55, -46, 26, 50, 6, 110, 108, 79, -26, 88, -46, -4, -81, 49, 23, -108, 102, -109, 43, 6, -128, -119, -93, 81, 91, 61, 62, -91, -62, 81, 43, -118, -65, 85, 26, -53, 18, 25, -84, -111, 56, 1, -50, 82, 1, -43, 55, -48, 41, 68, -44, -105, 10, 48, 0, -73, -74, 104, -80, 60, 121, 68, 19, -117, 49, 94, 56, -9, 76, 29, -122, -114, -105, 1, -60, 92, 73, 44, 88, -4, -88, 45, -26, -26, 121, 122, -29, 65, -111, -77, -51, -20, -18, 56, -79, -27, -30, -94, -75, -48, -24, -5, -74, 87, -116, 52, -76, 31, 95, -71, 22, -50, 76, 7};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.0801484016466);
    msg.setSource(43246U);
    msg.setSourceEntity(84U);
    msg.setDestination(16065U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("ISWKDPJWWIHRCFLNOQURUZTIGTEKGSJGMQUJYFSPQMLEQCVGVJLWQXOBBZCVHYDXXEIKKYFRSZVLONOFCAJHTUVMLIYFMERKNHCQYNAFCEVLRKWTOAPYXKZGWWJDMBAEBUHMZYSOOPPURTUJHPXPKBNZYNNAMRZJBWCLDGAMPTEWASDXHRISMBTGINKDAEJTNTFAKUVXLXZEYVMBUGLEHWS");
    msg.plan_size = 3969U;
    msg.change_time = 0.128577838603;
    msg.change_sid = 50397U;
    msg.change_sname.assign("XNELLYEPKPETMDPUWMXWUVZXDDTPVGHYFFFYOQUDVKRXJHNVKULIRGMGBWADIIOBMSQVVONXDBYWRBWSWQQZODLERZBNKOJNNYXZIKBNPRLCCYQJHYHKBGXFWYCRHXRFDCUSLBEEMVRVAQLITJWAPRSTOZMCHAAIEJTCCMJKGMGBTLJXHFCS");
    const char tmp_msg_0[] = {-93, -61, -7, 126, 63, 90, -30, 125, -115, -108, -128, 86, -70, 6, 44, 32, -100, -34, 1, -82, 79, 73, -30, -128, -27, -6, 112, 75, 0, -45, 3, -51, -38, -121, 51, -41, -58, -78, 8, -19, 116, 38, 107, 105, -107, 80, -96, 6, -102, 103, -105, -100, -57, 76, 115, -112, -105, -70, -119, 81, -68, 118, -61, 110, -54, 80, -36, -103, 105, -18, 39, 1, -36, -15, 102, -5, -92, 65, 117, 85, 25, -9, 124, -44, 57, -38, 68, 38, 50, -59, 116, 84, 64, -67, -86, -35, -114, 126, -104, -9, -98, -107, -79, 20, 110, 116, 47, -36, 20, 125, 99, -106, -91, -92, -80, -16, -6, 22, 81, 52, 10, -9, -45, -12, 121, -86, -62, 91, 71, 7, -62, -41, 96, -125, 77, 54, -63, 88, -77, -42, -105, -10, 85, -33, -63, 56, -28, 38, -49, -104, -108, -112, 55, 1, 72, 67, -58, -43, -66, -50, 82, 20, 59, -63, -8, -38, 63, -107, 92, 66, 17, -128, -15, 86, 103, -84, -62, -78, -25, -6, -53, -49, -80, 33, 13, 100, 87, -13, -49, 89, -6, 67};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.91089395399);
    msg.setSource(29529U);
    msg.setSourceEntity(43U);
    msg.setDestination(63082U);
    msg.setDestinationEntity(150U);
    msg.type = 34U;
    msg.op = 164U;
    msg.request_id = 49233U;
    msg.plan_id.assign("WNGXFICEGKVCNWOLSDCNTBTIPFXOGZAUQRXXNJOHHRLGELWXFYQDXYDUUHTJCBQKMFSKKRLGPEDDEQSHNTVBUYHFUDLKOARHLUQMJFRJVGYHINMAMURFSCCDNLADFDRVYMGBYPOZEKZQLYACZVYXPEC");
    msg.flags = 52651U;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.406413321383;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OPCZJTRZLUVQIUSYFWXUXFTTQGMSWWJQFQADDEVMISTRSWZHAYEYXOQCCTCMJXDZBGTCOBVOTTYKLODONJWBGBVSINZFNJPMZZLAYXHJCFKBVEIEXNPWQHAGZPCMGVVAAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.788150868071);
    msg.setSource(42631U);
    msg.setSourceEntity(214U);
    msg.setDestination(40776U);
    msg.setDestinationEntity(97U);
    msg.type = 226U;
    msg.op = 222U;
    msg.request_id = 63352U;
    msg.plan_id.assign("MMOGGLACGHLRTYMYAXPKCAZXADEMZUWLTNJHUZSGIERACTMWJDQIKXVMKGYKXSOABWNVPQILVLEXFAHQJDBQIBUNFWOAMOCGWFG");
    msg.flags = 44428U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.00693797772778;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TIULDBJNRXRZYPRXNSPGBVHCAYYOOQULLNHDSADEKXRDQGVJRAWNQCERGAIZTORFKEJMKFNIIUUDYQQKHJYJCYUPPZWQVGBGPMIEHHRNSLVHHJRTBMFCLSGAUUUEBSLQCUYXNLDWMPKWXEKXAMEBFKKMVZESWDTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.110431415694);
    msg.setSource(13723U);
    msg.setSourceEntity(217U);
    msg.setDestination(54463U);
    msg.setDestinationEntity(101U);
    msg.type = 175U;
    msg.op = 227U;
    msg.request_id = 17400U;
    msg.plan_id.assign("MFAMWUGCTSKNZNYKVOVPXNSCRAUANHADZWLBRHEZANXTUZPRLHVIHWLJPZHKISRYVVRCIBZTMXIBOEUJTWDOTMINFBCQNGVFIGCJXBBFLGUQNXMWSDSLCLPXPHOGQQEDVBYOTIDOZAWJJCEKGDYWYPAXZLBOMDFWQJAEGVPOMQS");
    msg.flags = 4388U;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("JRFWJETXETMDUYPGPAUCPYNMWERFPMQBHIRCUVJRDYIAKADTCISFJDCUSWRBDATGOZ");
    tmp_msg_0.timeout = 14758U;
    tmp_msg_0.contents.assign("EJIHPZHRIQFWTYDIBKFEMSLGIMKPMWSSARGYHPSNAENFARHASQRGVKNTTARHWWCN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WPAWVROVZGZJSLHNDPLGOIXYVHQIBECOVBLAAQXVKLMBPSMSDXFENEITIUCAVTHQOCKGIKGCMFMDPLBSNONXLYYMSIDYHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.708086567048);
    msg.setSource(17766U);
    msg.setSourceEntity(213U);
    msg.setDestination(35194U);
    msg.setDestinationEntity(189U);
    msg.state = 84U;
    msg.plan_id.assign("UYQRXFTWKHKJOYNXOBYZQIPIECVLMEMIMFTJCBNTARKYZRDMDPKVRJMEKOUBBJMDUWIPPGAIMSPILSYEIJXAUKZBWRACBNYAVFVGRCVSFQSSTWLADSXJPPFCNERJLC");
    msg.plan_eta = 1815880710;
    msg.plan_progress = 0.126045077345;
    msg.man_id.assign("CEHQFSCJPDTKXEDOEXOLDRXEFCZRSIWBRIQNZOJPKEBBQKGQTKGYZWOADXWYHUETWTTCJEYNLHXPJHKWYZSKSVCTIITZKGAPLLIAYBLGAUQBJXMWNBYWROBBFVMSKNFNPGNFPPOMSUVLVXKPSJRCABHSZGEFLCDCMMIZGQMSYUIFMOJHQSUGDGHD");
    msg.man_type = 57332U;
    msg.man_eta = -1294981556;
    msg.last_outcome = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.696486287533);
    msg.setSource(35134U);
    msg.setSourceEntity(30U);
    msg.setDestination(3325U);
    msg.setDestinationEntity(80U);
    msg.state = 24U;
    msg.plan_id.assign("YRMMYHUSAQTCRQPDATYQHGDQBASDIVWMVIUJDWTPSYBVNKGMETZEHBNAQDUNTZVWONBCSKRURLAKLACJOZSHIROUGYXFCUJXZLWBGZHEZWOYHBSSFBETXHZIZEVIFXCNJVJEFGCFPVEXBTDPXLJCTNPGZLQNITMADQYRIWVFSKXRGLOIWXMOUN");
    msg.plan_eta = -831439624;
    msg.plan_progress = 0.483801490697;
    msg.man_id.assign("EUQSCBUNWPDISNBGCDDXIRVVAVHOMMZIGVEYJJNDQXZY");
    msg.man_type = 28241U;
    msg.man_eta = -2107762063;
    msg.last_outcome = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.785270710502);
    msg.setSource(29185U);
    msg.setSourceEntity(121U);
    msg.setDestination(49996U);
    msg.setDestinationEntity(94U);
    msg.state = 194U;
    msg.plan_id.assign("SUICZUQFJKDKFJGSVGORVTPUPLSOWPZADXSWDBAOJLKZWTJPHSZHKEEKUHPNTBOADEVMIGMIJXECEYCMYPIFHQXIU");
    msg.plan_eta = -1385337117;
    msg.plan_progress = 0.277167073269;
    msg.man_id.assign("QDXKBMSFMUOQBVZUFCMPKZGTAMMBC");
    msg.man_type = 62543U;
    msg.man_eta = 1905429303;
    msg.last_outcome = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.467493664167);
    msg.setSource(22307U);
    msg.setSourceEntity(1U);
    msg.setDestination(31553U);
    msg.setDestinationEntity(121U);
    msg.name.assign("QSDRFWQZLDRXXEAEEYBNVEROSTHORCKISZHLLXSYTNVPRPMZPHMJMCTETGYU");
    msg.value.assign("FAFVUEJLNNRNACDEFQPMLKHSRSMXWEXKVZTYCLEPLWXSMKSWIDGPGPYDBJAIQHFWZUFIMOVMPPPVMCQBRQOGCOCIQYKZWWQTVAGQDAOKFIVOUBXNRDDLPTJHAAWEENRVMZYBYOTYHORUANRMJXWGLHURTTZKWEZCNGEZPYBSFUBZEBVAJHIGXZDDNOSLUFTDQJQNYMIQHKSJYIGYTORUCCT");
    msg.type = 159U;
    msg.access = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.809713020861);
    msg.setSource(6787U);
    msg.setSourceEntity(111U);
    msg.setDestination(27568U);
    msg.setDestinationEntity(210U);
    msg.name.assign("CEGZLEBLJXSVIODATJSJYFHRLCFHXUYKZNESUFWGHBZPAMKZCAQMSCBWDKSUGGDWYOUMQFTFAXXJVTLYNNCIIYVPJJRRQRBZFZVDAKIPZNWAOQUVRNJPLQI");
    msg.value.assign("DXJPIEHVAZNHXALZTEUYXUBNGWCZPYJJVUXQFUPFLVTAOUKATQSDMUCNRHZWYQMCHUHMZRGRRLTFHHRSSWYKQLOPYSBONGQVKJMXPZVMIDCTYIZOBHLFOEESZPKBNPYBNXZPLVRHDIMNZETQFGWGYNTNSGAYOIHDFFKXIWKKOETQKMWMKJNBSJKVWLOQIWESXCCSFARPDADGECBPBSEEIFLTAGJVURLMID");
    msg.type = 159U;
    msg.access = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.883396084609);
    msg.setSource(35232U);
    msg.setSourceEntity(163U);
    msg.setDestination(19957U);
    msg.setDestinationEntity(32U);
    msg.name.assign("VRMSCNSUSQXOMMSPQTDRIPBNGOZHY");
    msg.value.assign("XQDLKFSDAEUQZOWYGVMRYBJMCRFKAAAZUOLTLIBEJHERUNOEVYFFWPFIBOJHAUCFLJHYDVTZONHXKUWSSWBITNJVQOZVFIWCMFKTRWYHHYNXXSPCGEZULJYTQTVINTQCMGAXBHGFCLXDCM");
    msg.type = 167U;
    msg.access = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.359083563421);
    msg.setSource(19230U);
    msg.setSourceEntity(43U);
    msg.setDestination(30760U);
    msg.setDestinationEntity(74U);
    msg.cmd = 19U;
    msg.op = 109U;
    msg.plan_id.assign("KSBVOMESHJZTHNWCJZIACYIRTKOTMFJPOOAEINIXJXHJZTPCUMWIQY");
    msg.params.assign("ZFUXFOQZFHQEWPXARJWEDKUJZJBHTQNKQLOLKAVKBTDIPNCOZORLFSRWLGXYMGDMESGZGZDUAUOFICWELPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.648228105316);
    msg.setSource(35139U);
    msg.setSourceEntity(180U);
    msg.setDestination(22122U);
    msg.setDestinationEntity(60U);
    msg.cmd = 121U;
    msg.op = 100U;
    msg.plan_id.assign("JIZFWYLUFWAPQUVZHTHYFLFOZNBEXLXDBXKRRWDHAAQQKNHNCSGXTGABSHUJKLKJOWGCUONZKCNTIUWRDEPWCJEGDGTCMTXFS");
    msg.params.assign("XXGOQSOSNWXLPCSVJOOVHOYCSTSITZOFERATQZFYKWOIEKQJDSPUBHGWRMINLHPAIWKPXMIETZHXUBFHVBDLIVXYLBMKPGBFBZDFVXHZKQAZMCCCJMCEJEKUJQOSVXDVLRUKACZEYMRJPARFNPANVEEQBJDGKMTQKHQGXOIPAPKWJFCJGNQUFWTDRINFMSYXWI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.185574627874);
    msg.setSource(24894U);
    msg.setSourceEntity(109U);
    msg.setDestination(4978U);
    msg.setDestinationEntity(131U);
    msg.cmd = 105U;
    msg.op = 32U;
    msg.plan_id.assign("ZBBTUWSOLFNARWTOHPZORMZGINLIVWPIREHOKQMTXBAMHRCHVXYMRDVPBTBAUUJDCSSWIJKXEFSTGONVLVBDDKTNERBDDAMIYHXNXWNRSTFLKFELAZGBAEFWGHNYFMTGGKSYMOJXVVFKLSJUUXPDVBCIZDJLUYANGXCRCQYQQCFLEJZYJMHKDRCHQIQDQFYULPYCXEFIYWKUVS");
    msg.params.assign("LYMEMXGEFQGPJKJRXATOLBJCTPDYXYXOJXSJTOITKJXAYBEFJEOZCNWNTMKCZSFRKYXSZVII");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.579831177853);
    msg.setSource(39372U);
    msg.setSourceEntity(86U);
    msg.setDestination(6980U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("XDFIEAMULYQFNFHAVDBSAKUPRCBQVYZBVVSZOCWZDNEKZSLQPCQCSNIPKIZRFKHAYHTLUJITTGAVKOMYDNRJGNNEYBSTQPQTMAKJXMOMMSKHUNWJAJILVFVOJQCKRHZEPBXKGYXLSCZMPGYUTZTFLNWSWBXBAQXOATLGMDWWPUFJOVRUCFXIEDCGHGVEWTBUJKCTFGNQSYDENGJQMYIVZHLLHSERURHXPZFWOBUPEDOP");
    msg.op = 186U;
    msg.lat = 0.785932265323;
    msg.lon = 0.840375486969;
    msg.height = 0.218635182108;
    msg.x = 0.993830695883;
    msg.y = 0.90570651763;
    msg.z = 0.950595505199;
    msg.phi = 0.74266668506;
    msg.theta = 0.360490878449;
    msg.psi = 0.274573724486;
    msg.vx = 0.122058168961;
    msg.vy = 0.463816082373;
    msg.vz = 0.33160346723;
    msg.p = 0.569844347241;
    msg.q = 0.3818638961;
    msg.r = 0.134696452903;
    msg.svx = 0.691783525538;
    msg.svy = 0.945176839172;
    msg.svz = 0.038099759275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.700304870215);
    msg.setSource(32237U);
    msg.setSourceEntity(41U);
    msg.setDestination(34617U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("DAVNXPJTJPXEFIOPNQASUEDBHNJTUEIC");
    msg.op = 17U;
    msg.lat = 0.30386424165;
    msg.lon = 0.62288769981;
    msg.height = 0.857801243859;
    msg.x = 0.776635505012;
    msg.y = 0.78438439803;
    msg.z = 0.282092867518;
    msg.phi = 0.224063595615;
    msg.theta = 0.255431791462;
    msg.psi = 0.883491131707;
    msg.vx = 0.556236748686;
    msg.vy = 0.458211293309;
    msg.vz = 0.0564354482744;
    msg.p = 0.808748221045;
    msg.q = 0.391471413704;
    msg.r = 0.284833827482;
    msg.svx = 0.334622889167;
    msg.svy = 0.866560190651;
    msg.svz = 0.737717170078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.288681524541);
    msg.setSource(46741U);
    msg.setSourceEntity(36U);
    msg.setDestination(56271U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("TDCAMZBXFSLRPMPVIJTLNVORIHUAVYRLWUMQNBZVOMQVMHQOYOORQMDWCEITHKUNURWAYJWXVEMSHJQLOPGUUQBSYGBBZPMQJSLAMUKDFTSTQQPMVRNHXXACGLDFUHKGCHPZZTYTNBHVLXBWYFSDYEXBKOEPDKGSUJIHGRGWKUTKNKJLLZXCZWDCYNCPPEEFEXEWORICKZXFAFSJBPS");
    msg.op = 165U;
    msg.lat = 0.567265969905;
    msg.lon = 0.771297476348;
    msg.height = 0.792413054752;
    msg.x = 0.187061033566;
    msg.y = 0.608242749869;
    msg.z = 0.461622333573;
    msg.phi = 0.194603924491;
    msg.theta = 0.737804840888;
    msg.psi = 0.292408712595;
    msg.vx = 0.177697112172;
    msg.vy = 0.516119363134;
    msg.vz = 0.155490751251;
    msg.p = 0.225555695662;
    msg.q = 0.728176730278;
    msg.r = 0.388648464858;
    msg.svx = 0.534652579304;
    msg.svy = 0.0916872298783;
    msg.svz = 0.181046526139;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.178601990101);
    msg.setSource(62043U);
    msg.setSourceEntity(4U);
    msg.setDestination(65486U);
    msg.setDestinationEntity(43U);
    msg.plan_id.assign("OWOKUGJDTHYQMOUGYNGALZGLDWTC");
    msg.type = 158U;
    msg.properties = 11U;
    msg.durations.assign("HSKZHLPBFYXPEZUKDAUBEMAGWICLCDBERCQJAKMSHTMUMBYOGKVTEQODV");
    msg.distances.assign("MQSAOGLOMQIGUVRVUZEBBHXFAZODSHMVIHNFDJFSVDUWSYCICLCGQUPQEIFQZCQJWHDASATVMJIHRNCVZQLBKUHJFYURQLBJJRNGRCZVMZXDPVFDKPGNCMNFUPWYRJORZLYKHEDPKBSEMNTBTVFWSTGGJXKTIMBYHAVQKATLXAITBCUEFDEGIWEKYOFWEUXWPXSEPZOHWYLNJMTIYPJPICBMANZXSLKWROTOGYWLXNXDLX");
    msg.actions.assign("OJLSUTEFWFRPLAXMSHNMGMOBHAPKYGAITNQVNUTRDOFDZLTCRFFMUMKEJMZRJKNKMLIGBDQHCFWDVSVZLECOLSRUWPQBPOPYKHZSZOBTQVJYBOVYATYATEQFXQUKBULIGXLYRWDQYCCIXAGOSWYMJOLMIGIHUNCFUHSDVUCCUKEHRRNVAEQWPYDNBFTSVXNGNEBDXZXVREIKABYPDBXMKJPALSFAXKTICQJZZCGXWJEVPJWTW");
    msg.fuel.assign("UYFDRBLMKHEOYHQGYKYQXBJHSZVNIPUXGWWZSIKZSDTJMUCWSLLTRXIKEMXQAFRSAULXYDVGIGKWMCDREAIVTRHSCGRNYAMZDFLUXMFBBAVLXLJCJGSOJPZPREOPBBGTVCNCONKAPKNMZJPFBKFDBVXHEHDRAGNLLZJHIYTINZVEQGUCSKRFEMWQVEPXUOOOALSHNYWFUDDTQUTPCDOEZCPIWTVQHSPFTUOIRQTOAGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.12112862213);
    msg.setSource(35558U);
    msg.setSourceEntity(101U);
    msg.setDestination(44594U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("YVKCESPKXSBHSLXXXLHUUBXLWRGPZJUSCMBOWJITSVOAM");
    msg.type = 253U;
    msg.properties = 174U;
    msg.durations.assign("CDBWRQSEHUXETLYBBFEBWMHOEYFOPZKMNWENEQSIHIKXSUQGFXJUPEPHTMTYGCIRXVUPWSLNT");
    msg.distances.assign("PBUKYCQUDMFWVPAUVLLHXXQHISOHIRHTSCTRFCWLZU");
    msg.actions.assign("BVAWRVYPYUEDYKUIJBYAFWQTMJEXEFBGNRQLXGXFTHJAVMFPGRCLNHLXPQOQVWDZQGVXTQWCSEVCSYHPNBDDWZMPIOLIKWPVUOTSHXJMKXLPDFRTHRFSCA");
    msg.fuel.assign("RKJFUIMWBSWZQXFRYWXPIZPOLDNATLLDMESCXUQZHFYRPOJZMILAHOWDEJKTIVBPSURWDXQVHIXVKLAHEOCSTYFCLCJOBFSWEDNUFOFTWJMGIMEAZIXVVTBXYBCEBBTRH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.0445471584029);
    msg.setSource(41429U);
    msg.setSourceEntity(209U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("XGFDEBZRULKFRNNQBUPGVEWDKJTOTSAJHMBAFUPESZIUHNVEZRFDXTVXQCPNEIJQLYOEQPRAGCIOPBKCYMAZWVBBA");
    msg.type = 69U;
    msg.properties = 128U;
    msg.durations.assign("CZSSPRXBTLYGEMMSUNMOLCKVXDWWFVIKQBEJUZKLAJBZFZYBUYDQFECBFLKWEIMQSTAZTYXWSOFFYFJGQDEBVLRFHFJPGJTARCCMXICKDEOTATQUWKBIMRHUBRPQKNPXBVEKOGSAAWJNDONZIPVWQVHZPMLOCDHNJRXQMKOHAUGNSGHOXCFPVTHDNSMJGRQRZJLODYWEBPJSUICLTNTYYGLIIAYVZZGUAURRXAHIVX");
    msg.distances.assign("FNYGMNGBYUIAIKYZRZCQWIWBLJPTZRUMGEBISXDKAEFVDNLUZOOKDNJSNDWDEYBTTVOSKVEJAMYVCQARJEVVHYPHIXTSGEQMHVFJEXEQPPBBEWKUVCPHMWQIXKTHYCGOARQFILNDRDQLLPOROEMWFZUMRPLWULKFGQUCNZXRXCLHZBJINHAZOJXN");
    msg.actions.assign("ZOGPWGEINJXQSOCWGSFVJRNLLEVLBXSBREPLTIJVBTSJDHVIDKTLTVGUXPACWGMSORZAD");
    msg.fuel.assign("JXBMBWXDHNPRSFHYMSTIPSEHILRJTGPVXYXKRZDGYMIMNGZBXLPCUZMFQBCCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.815109643207);
    msg.setSource(14888U);
    msg.setSourceEntity(200U);
    msg.setDestination(19900U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.494731424672;
    msg.lon = 0.149881307171;
    msg.depth = 0.745897859426;
    msg.roll = 0.603989788044;
    msg.pitch = 0.876136248367;
    msg.yaw = 0.5796966239;
    msg.rcp_time = 0.113323907194;
    msg.sid.assign("WBVYVTZSJSHQNLSFRTUQQGWWUDNAGWLOAZOONTALHRGHDYNEEBYDRGWHOWKYAIVBMYAIKVJXPPCBSOKUGUGOQKRKOCHXTALEBJRDKTLINIGXLUVCRKHIIPUUCI");
    msg.s_type = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.935152287604);
    msg.setSource(19263U);
    msg.setSourceEntity(143U);
    msg.setDestination(7013U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.352428747681;
    msg.lon = 0.485506126735;
    msg.depth = 0.0365464745702;
    msg.roll = 0.704885559488;
    msg.pitch = 0.997729912792;
    msg.yaw = 0.348498057694;
    msg.rcp_time = 0.425761334711;
    msg.sid.assign("AVMXLSRBSFUCQNVDNICHLBJKZOAWBCQPJRSDDOYFHFMAXUPPSXGTDLBYFCYAYJOVKJPDEDTS");
    msg.s_type = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.0458852955206);
    msg.setSource(8110U);
    msg.setSourceEntity(182U);
    msg.setDestination(44245U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.496928453598;
    msg.lon = 0.0324306875566;
    msg.depth = 0.144140863173;
    msg.roll = 0.3388233026;
    msg.pitch = 0.730104655402;
    msg.yaw = 0.509647553044;
    msg.rcp_time = 0.933951901917;
    msg.sid.assign("EBDNYJPXXYHLPQOMBPRZMMKMOINQKNCNTHBBUQTSELOZDYOQCPJMFIHVQZCTSDFXWJOSOZPAOUJZKBAUHSJIEDCHBKQWRULLTJIFAIATGLFNFRSNYVBEIHQMXNEAVSDRCWWXUPGAGGVVDZGQVWFKKTFZAIEVTPREGISDIRAMKXIXURWCBLSXSYFOQLTEJ");
    msg.s_type = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.622173640157);
    msg.setSource(58874U);
    msg.setSourceEntity(42U);
    msg.setDestination(47521U);
    msg.setDestinationEntity(90U);
    msg.id.assign("NCUSXQOFHASDDNKUTFZCGAZUXWADJLPOJQMBQSAJ");
    msg.sensor_class.assign("XSMZOFIRFKMOKBYGEHEVTWMVVNHZYMDSTQGPTVGLWPEKPGHZEWBIZKFNNQRMWYPDYDUMCCFRQKULHORUGARPDOBACWLZYVQJWOFLCDETFKHUJRHEATZCUIWNICQAXIMSGNJBKPNIAGNTLYTFFIAYJRPVTXPNHSUXAJSHLIYZUEACRTHPGMBZQWUYL");
    msg.lat = 0.681114383228;
    msg.lon = 0.283396161148;
    msg.alt = 0.0225824486199;
    msg.heading = 0.265012898109;
    msg.data.assign("LAAGMYONHYPATQJXRDVTVZUZQEVGHIIZDNKWCKXTNTXOIWEWIUPRKWWTEDOPVMEXJDYQYSAVWDYIFXLFHJFHYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.521398115787);
    msg.setSource(15613U);
    msg.setSourceEntity(93U);
    msg.setDestination(21287U);
    msg.setDestinationEntity(120U);
    msg.id.assign("EDDAFQPKYMDUKPWUYGVMILTGYZXJPBIZIMTODIWUNZLRUEJOSZFFZHEFQDHHKHMLRBJAOXXXCQLCQKRXGZIWNJCCHTNNGDIPQLMCBGMVFQTKLXBDEAASRYGQOZNLTUKSUKHWVEJONVHIMKVSAPWZSSBOFYKVPQACCXYDTLQPVWXYIHBSOMHWWGZACFJJYUYETEMAFRTOGEAWOEGERUXRMFSWBBNKRRNQTGVFDBJANCSLHJPSLZVRIITCNB");
    msg.sensor_class.assign("BXHXWXFFLQZEQFBUCISHYJLUSCGGDJKXBSCVVKVEZRXMXTUMGKDMFTNWQFPKEVSFEYGLFPBTWXDAYEQOJSJNROOIULKSOQWXUYPFQARQOAI");
    msg.lat = 0.662400774452;
    msg.lon = 0.505368051404;
    msg.alt = 0.0847935487956;
    msg.heading = 0.414676784335;
    msg.data.assign("CQGWUYKNKFOFJIQRYGFEBONOGFSSDJZTIQVGISMVTMAEFLQENXVPXQRVPRXGEWHOWFPOGSDBYZLXCVTEZMJXKYOMNBACLBVZUWWTQYITGBNAOPPBEWNAXZAJVXUMSUBHQCCTPSGRUWQHCIGSBIYJCMLMIANEDRPLDEFMQISLOTHADVPIZKJJURDDQRKWLJXLUTMTHLIHNCYHZKEFSVBJBZHOGFERAYKPTDWLPYKARUMWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.244367384369);
    msg.setSource(37417U);
    msg.setSourceEntity(102U);
    msg.setDestination(8786U);
    msg.setDestinationEntity(48U);
    msg.id.assign("PVCHYAEVGSGYBLILVYBIBMKESQLIIREPUXCOCVFLVAGXHSPXURJDZBJJQVQFFYABICOGIJNCBWJLYMWBPVCVJZKHRPTFJTMOVUCHMLLWWQOJODPIWDXSNNHMTTUQKRUNAJFMYOBMWMQNFBGXEQNTPANFTZDDLAQWORIEYAKLD");
    msg.sensor_class.assign("KWDYSEZPYFEXAPSXGCHLMVSATEMARXNSTXHNHYASWKZPSXFNWVISZPQOUUMJOQAZDEVT");
    msg.lat = 0.145637847791;
    msg.lon = 0.361087485033;
    msg.alt = 0.0713504724623;
    msg.heading = 0.27627243465;
    msg.data.assign("IDVAOHBQRUOTPDHQLXFPKFRLANWHOQSNRQIPVUJTCPIOCDBRANZWCGRQBGTRUVZXVHXSFCFJETPTLXEXAABYWSDHBJEFMEPVWBKMIUFJXOPHCLNYZWQFERPSKZFSWANTQUZMYUQYVNOHSJGSFTVQMYJGLNKYZNEKCSBMVOVDUKMGTOLSDJRLGCAIKBANGBCRMWCWJZXYGRZDPTOUCUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.398419372894);
    msg.setSource(11441U);
    msg.setSourceEntity(80U);
    msg.setDestination(8637U);
    msg.setDestinationEntity(30U);
    msg.id.assign("YGNEZJAPMWUXCDOMNULDMUXMCEIUQKKVESYBCWBGYLNDATIAAMJBKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.74002028841);
    msg.setSource(65203U);
    msg.setSourceEntity(169U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(214U);
    msg.id.assign("EURNIIJZRNYVSAPWAHMZSHDHECDHDUFVKLINVWKOIVRJDVRXRYJQZWZCUMFNGPYOQFUOCGOFYYJAFDWOEBSTEPLMMHQGQJXCSDKSYILWNGCNTKBNEQEAWPBTLVAPBBQQHJTTRPYITZFUAXBBUBGMUOVMAKXWXMKKUTTGCHUGJZAHQLYHQDZORMHS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XWQNEGFMLWLLXXXBDFATOZMGFDZMQRSMMETSPWYFKKCFUZMKGUMTBGOSOLHWUKSCHUPRHRBKASQGCIXGANITLMJBRBXSEEHAVJRVQQSFIAPIXJKVJCYGKROJNILJBBVANQDHOACFQHBSZDWHTBFREWP");
    tmp_msg_0.feature_type = 32U;
    tmp_msg_0.rgb_red = 14U;
    tmp_msg_0.rgb_green = 242U;
    tmp_msg_0.rgb_blue = 69U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.673246193991;
    tmp_tmp_msg_0_0.lon = 0.372395269246;
    tmp_tmp_msg_0_0.alt = 0.135850103381;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.721808342261);
    msg.setSource(60494U);
    msg.setSourceEntity(210U);
    msg.setDestination(60372U);
    msg.setDestinationEntity(2U);
    msg.id.assign("UBLDKRTGYQOQOOVXJSPLPZIPSJNTMVDSROENFDYBAQIXXCZWYGUJIKFWMVGMUSZQYDUOLRUJNHQBEUGWFZIVBGEWKDBVBLDNFOYHZERZJRJFEKTOIIHKZEYYKXMZHJXPCV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.261852111323);
    msg.setSource(47405U);
    msg.setSourceEntity(20U);
    msg.setDestination(40104U);
    msg.setDestinationEntity(119U);
    msg.id.assign("QNKEARNXGCPYDXWTSHRPXAWPQKYURBKPYQMMSJEJFVGITTBCGBIBTLIVHRQSNOSHFLZDIGMJZZYKVQQWJQGHVUTRGKZEHWYWTURDKHFPYXUMUAODSZPUUHSQSFVDXWKJVWKNNEKNVAFOIGDOQGB");
    msg.feature_type = 166U;
    msg.rgb_red = 123U;
    msg.rgb_green = 148U;
    msg.rgb_blue = 156U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.803945679359;
    tmp_msg_0.lon = 0.824335553379;
    tmp_msg_0.alt = 0.793969467453;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.130099191864);
    msg.setSource(22987U);
    msg.setSourceEntity(29U);
    msg.setDestination(29114U);
    msg.setDestinationEntity(220U);
    msg.id.assign("OJFUYEDQAPHZGFCSOLDWPHZLZQXLYYNTNENPIGPFEIFAQQBZGMSVVRKYUKCJAGRWSJNVMVJAKJSOLBIGMBMEJSXCNXMGYAQRUPLCXPOIWZTVCASXGSWFCHVEBDKKDUKWPDWSAPSBVIMXOIWVFBBFHCFZRUQJDUJGQJDBUFWMBKAEMICUROOYZDEG");
    msg.feature_type = 25U;
    msg.rgb_red = 41U;
    msg.rgb_green = 135U;
    msg.rgb_blue = 100U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.372459800013;
    tmp_msg_0.lon = 0.796045673318;
    tmp_msg_0.alt = 0.0670297574408;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.804369256839);
    msg.setSource(11739U);
    msg.setSourceEntity(246U);
    msg.setDestination(43525U);
    msg.setDestinationEntity(87U);
    msg.id.assign("PLYZQTNCIUXHQUEBKGEDJZQFKFFQDKOHSJAY");
    msg.feature_type = 99U;
    msg.rgb_red = 47U;
    msg.rgb_green = 168U;
    msg.rgb_blue = 113U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.172639132286;
    tmp_msg_0.lon = 0.423569799181;
    tmp_msg_0.alt = 0.922329085736;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.739902201064);
    msg.setSource(63804U);
    msg.setSourceEntity(90U);
    msg.setDestination(36464U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.432595981403;
    msg.lon = 0.0097691220617;
    msg.alt = 0.202257693284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.511172117449);
    msg.setSource(25821U);
    msg.setSourceEntity(152U);
    msg.setDestination(50497U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.721196566199;
    msg.lon = 0.071088341755;
    msg.alt = 0.982629181171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.196778003439);
    msg.setSource(38020U);
    msg.setSourceEntity(2U);
    msg.setDestination(59705U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.213548732296;
    msg.lon = 0.902205904825;
    msg.alt = 0.0940981340826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.586102636834);
    msg.setSource(35017U);
    msg.setSourceEntity(151U);
    msg.setDestination(61257U);
    msg.setDestinationEntity(172U);
    msg.type = 242U;
    msg.id.assign("NMZHFKNCXRDPGSFGEOIYTMDVMEDUNACXQRMZIUYYTXWLOVPHWUPKATUAXOOQVSDCMJPEKDAIYEKVVYVBFUFNBPWZBPAXQUQSJFGZKEBLOTRCYGLDNCFHSRWCWJZOCGSKSJWZDTFRHTAWQMVKLPAHCBMQXUZGIMNZSJREFXIULAEG");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 208U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.44478954346);
    msg.setSource(59937U);
    msg.setSourceEntity(183U);
    msg.setDestination(1470U);
    msg.setDestinationEntity(202U);
    msg.type = 25U;
    msg.id.assign("JLSGHERHLHVGCSBNUGAYINLEEWRDYCLYQAKJQXNQXSQOOHDNMPVQSOIYPTWWBQIMVCBQQDIVVBDRCMNGFZWKOTFRDFUDWMLYSHCWAJGVLTSZMOYQPTEYOBDCNLJDFXKCFEBPGIXRGUFEAHVXBLWUOHYKTRZTNNGMKBKVTRYUDCBWJIJXZAPFRTZGUIAWQRCOJJZCAMSP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XXRKXHQMUHFNAIDPPCGTRLCHUARPRGKRIFYFTOMNVGTCXFZQDYWTIBRLHQLOSHWOUJINYHTEGHRMINTNWAFUAYGDDDMZEZYZBQGRJLLZFXVKUBEVKBFACTISMUKJDXSCXYBOCHOJJIDVPEYJVEAHWGEVPSWAJOLVMYIMUTOJNSPBKIYQDINUCEDGXVFZSZPMJZTTZAPGQWWKOEGQXSWFQB");
    tmp_msg_0.value.assign("RXSWDCWICZXJPELZWGNIYWURNJEFDEIONAOEXTHWTDUAGIEXMBRKIPQQVDACYGILGMQBUPHPLFEOLDJBKXYBFOT");
    tmp_msg_0.type = 99U;
    tmp_msg_0.access = 224U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.502937012035);
    msg.setSource(19243U);
    msg.setSourceEntity(100U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(249U);
    msg.type = 217U;
    msg.id.assign("QWKVTPZQALYKVYMQBQUDHZDDLEBTYOQRNXGPHUEGYSLDTDMBOPVVIEBWXKIMSCPJRVAQCTFQELZUTSTNFGGFBQJKNXLKI");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("ZKICAPSDOEYAFFCYWTHABZTJYPGBHBZIXVIZXMKQBJDHODRESYKYSHNIJNARERBWELQTBMLNZYHBFLVO");
    tmp_msg_0.lat = 0.0573548705723;
    tmp_msg_0.lon = 0.951969800874;
    tmp_msg_0.z = 0.71022281286;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.cog = 0.168122668017;
    tmp_msg_0.sog = 0.89874494908;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.121852622172);
    msg.setSource(9525U);
    msg.setSourceEntity(195U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(64U);
    msg.localname.assign("ALMTPIHRRAXUJAWEQOIDYGFOOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.046239703746);
    msg.setSource(44466U);
    msg.setSourceEntity(65U);
    msg.setDestination(40614U);
    msg.setDestinationEntity(159U);
    msg.localname.assign("HPJKQBYUHATNLYDIILLXTYXWOZRUCGYBFLIIURNCWACWBBGJCRATAPFQREATOHWFENOPJYVVPNMJZEDPOIQZGWDSNKZNXSQLCVLSQYXMPXFSJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.775406378279);
    msg.setSource(56347U);
    msg.setSourceEntity(94U);
    msg.setDestination(18582U);
    msg.setDestinationEntity(155U);
    msg.localname.assign("HXJDUAKOCJOVBQRRYEYWDHHALIQSTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.339061600242);
    msg.setSource(52332U);
    msg.setSourceEntity(117U);
    msg.setDestination(44763U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("JKWLQWIBOTXGGNQZXAUFMNPKCOKINHBGCWOFKXEENEPAOBNYLSNDVPAQKVLRKEJSKPLHZGAHDIYNYSWJIIDCMALAVTERRCSJUZFFVLSQZSFQXICFHJCIJENWGMDLRGGSDVADZIVUFWREOYDRMTTQOSAHLRHXSOJWQPZHMPEMYJBWVBPPCRUBQGTUQJPMEMOMBFCTYLQURUKTINNUBVBXH");
    msg.predicate.assign("URVHQJXJNUZEBDWOVPHZEBUKEEIVWBMNYSIMKWVHDUYHFVTOSBZJEXFJTAHKBWQSOCKCQPXDFUXYHPMLDDDTUSAJAVFLHCOBQFQKTCEANOLGCHIDRRCERWLLWAGQPRPPSQBXIIZBQGAFFTAAALYJGUFMSGPMNWBXGDQLMVMRPGJFNPNKSIZQKTNDVURGNDSJKSUYVMXHRXUOKTZMYEYTIERILERTAZKXCWZY");
    msg.attributes.assign("LMSEUTTZKZMEUZKOOMHHILVWIYTZRGNKACPOVOBUWVCBRKQDZSCHTDTJXFXRIJNJAFWWVZXDIVAOATBKLNFXMDXNYAEOLSDBHDUYHBJUHHRGTQPAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.484072019754);
    msg.setSource(17406U);
    msg.setSourceEntity(208U);
    msg.setDestination(9483U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("VTJUHWPWFEIZNQDAMBVWFRIUFAULZGHIIVHMMZFDGJTPZERXGRCOGMOJKIFRDMSNPLVYFAFKSYSZVISDCLPBNQNJGEXXCPUMAQWKRZNUXDNZTWCKBWHTHTJOSGDYCPJASADBEAOLNOEWRYAQIBOECATEJLV");
    msg.predicate.assign("BCAWIZDIOWJGFFBCRHZBQDQQIWJZKVKYHWHUGVLOUQNBWXJFBYXDNYMMSXSTRZISLGLPWRDTAPVRRUX");
    msg.attributes.assign("WFVUEXJUKZIHFVPRQJCQCTMJTFTMEYGDBUBZNLSEXOWOVBUQPZQYUOQFJHNPEYJAAPXPHKAOWSILSKMNXGRNFGHEQTGFCSKJIL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.716297521524);
    msg.setSource(55084U);
    msg.setSourceEntity(81U);
    msg.setDestination(7213U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("MPYIIHMCXIALTXYNNEUHABUAIDYFOMPOVBECQ");
    msg.predicate.assign("KSXJGGWTWSTYYMIQRFUUIVNGLGYLHCTUPLWWZKTOUFLUDWYXUVGPQHFA");
    msg.attributes.assign("INOBXGGLBZKKFVFPSZMZEEWSLOGBRECXPCBYETKVSWATYQBDEVKFVBHGCKOUBCQDDYRTKARDJUFUNQUTBLOVSLLZWDWPPERHAJIVCLFHHLMIYEGEDDIULYCXHUCRGHVWJPMNRIGBOJWNYGHZFZNYDOFMIYXNSTEFMJPIKYQVMARXPLJSGMASGXZZBWQDTXOOQXSSZASJTAVJNQMWIFHHAKJNOPPXEFOVUAMATICWUKXMTRCWNRNHQTLQUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.894700720922);
    msg.setSource(4315U);
    msg.setSourceEntity(11U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(25U);
    msg.command = 202U;
    msg.goal_id.assign("TPMPYBUCDLLEHUQARYELKCNLGUDSGFNLBWEXQHXNRPXHFUBRBSENWZIJQZRSMOXTIVXHECVFDETKNCESHJOVFRFCPCMTGXVC");
    msg.goal_xml.assign("XPEOVUMHAKWCPMCLTDWAKCFGNALGTLJKGCIMDPZVAZYEORFEFXJGBNUFPDQSMGUOUCNDIHNHPVLYHBIQOTBEYNMKRGDKZSG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.728467762441);
    msg.setSource(55695U);
    msg.setSourceEntity(242U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(205U);
    msg.command = 196U;
    msg.goal_id.assign("HOUOUHPVVAFEEZKVZANASPZLKVIKCLMGMVVTIXNCIWZWZWVHLTJEHXKJVBXNJIXDDRODKQOOULXMTQRH");
    msg.goal_xml.assign("QPJYMHEFIYBPFSNDDRWRDZJKHJJRHBZFOUCFXTAFANKXKWSCNMMMGOUCUHAVLTRGPVNKTWXENCZXUBQMHLDOTGYOUTQPFQRZPMCYFJZDRVVXHZFWIVWOAWGCBUVJITXLKIJSEEKAMPLXNEZRUKYOENBQJPOEQFXYZJGLCUIDAMBADEDWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.99376190388);
    msg.setSource(30642U);
    msg.setSourceEntity(74U);
    msg.setDestination(33178U);
    msg.setDestinationEntity(49U);
    msg.command = 6U;
    msg.goal_id.assign("MUUZJFYEFMRLXVSEKSTKQQZOGKSQHCBPLRRHWMRKDTVAGHPKDHDHHEFOJMLSXLNWEBBGCPNKRUOZOCGONFBRFBAFTUJWMNDZRITRPYVCBIOAVKSATLWQAYEPROYVGJQWMUDPYNVHDTVEZUDBSYYIDKPISHGVYDNGJNTAXOWIJCLFAPWAKBFCIMIWXRQOLNUHJUWXQZGXNGXCU");
    msg.goal_xml.assign("TAWQMMWDDVDETVZBCSZGLZLQINFREDXOEYTGUKRZQWCWOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.967027673377);
    msg.setSource(40532U);
    msg.setSourceEntity(199U);
    msg.setDestination(60157U);
    msg.setDestinationEntity(14U);
    msg.op = 90U;
    msg.goal_id.assign("PPWDGTSAOXMZJTSVSFEKAZLOQTONJKVIQLEZDVAWKYQJFVNHZYQERNBJFGDTUBRRFYMZXSFPBOGLYACEWXSQLMZBNBCZLIGEUPIXAKIHFVYYTITSKJPPGTPYHEXVAETKFSOCGJSMECBLFBRUDGEOHSCNEDRJBKQOCTUYDGCLGHMCONDXFAMHXMWYZCHIQUCPNOHUJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WZMIYDYULFGWXVOCXJYWPKYOJKLNDHIABGKJXVPDOQOHXFVEMANHFIYNAAJFTCUFZKUSOOLKHLHLZDZRDDBDTDTSSJJUWBGTJXURJAHVCIPFRBNVCTMSLSIEBWEEYMPQPGCTIRRVQNCMVLIWMURPSSJIASUOC");
    tmp_msg_0.predicate.assign("MQEFHLAOLJIKERSCYLVJXGAEZXMUIHHTQTIEPUV");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.592957013648);
    msg.setSource(64226U);
    msg.setSourceEntity(175U);
    msg.setDestination(23817U);
    msg.setDestinationEntity(56U);
    msg.op = 41U;
    msg.goal_id.assign("IXGEITYMOHNJELERMGWVLFEAKNCHDUKBUIERQZYCSMBQGBLCQVULXCDTFQWEYVFZDOVIRDPXQWNZSJJTRWCOPIGHMBGAHUKKFOEGTCTRVINBHHCIAQVXMRFFUABSZVRIDWJZTSXJBDJVLDXKLHMLSQQPRUQYBARMIUNNYKJPOYWFSPZFKZDJXGWHWYGPUFUAPTZEAJSRTPXTOSSZYEI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RIPBQUCROSLLMPCMBTIABDXHMXLQUFFVSNIQCDGZPUCNSAIQCYZDDPFXKEMRXKHUQYGOSWTTBHMGGPPXTLJCYJTSHZOYYSNMJNRGCOZLHVTIERJHLRZRFCJUOGOVBWFLTGFWVTNQKVAKJPVFWGSLQNQZQKMJXXVJMV");
    tmp_msg_0.predicate.assign("ZRPONCJDVSKMUOQXBLIWNAHEUUVQLNBIMBNYXYCVSYXZBDFGTTSPATBQGUMKLIYNOIJWJRYETSVDGIFEZKAQMLMJOGPPRULPTDFROAOHOXKCCABTLWJEPEMPNZPBUHWAMSWVDMARWUYXNNCDMRJQALPZZBD");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.644120520445);
    msg.setSource(61045U);
    msg.setSourceEntity(222U);
    msg.setDestination(10778U);
    msg.setDestinationEntity(1U);
    msg.op = 66U;
    msg.goal_id.assign("NTJGVETWYZBCKRIQFFTXJUGLEEUUQEKMWHGUDECVHZYANKGHLYEAAOPPAWBSFOUOWGUGMBTWQFIMZXHVVWDBQXJTRJHXXLKMVOPXIOXINSJIYZXWZKKOMPVCSHNIFRUDSWLIW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VHAJYPDACNTJBZUGZOXZWRVXQHXEZYVWVQSWBRKNLZSBMTPHJBKCJONTDGRWEESGDFSYLEJLCRHFPPSUFNIPMANAANJLGGQYFMGIBIMOZIRUIIKEWOXEUBSMMTCNTNUA");
    tmp_msg_0.predicate.assign("FJJISFINYBAMFZCWQLKVYMONSULISITCXRXPEIDXBCXGWOXA");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.587165304717);
    msg.setSource(62586U);
    msg.setSourceEntity(80U);
    msg.setDestination(49706U);
    msg.setDestinationEntity(53U);
    msg.name.assign("OCDIZNSIPVMBBEJDAAVBMAZGPILPDPCMPBKQCHXWSJQEQUJWXJGHVNCRYJTWQSCGTSLRYGHFKKLIHARHSJFLRAVOPTFXPUDYIRDUXEIEOYENUVFTCAVIORSDMZVERSUGZRRQNNMUKHOX");
    msg.attr_type = 128U;
    msg.min.assign("YLILIECAEVUZQQSXGUETPUYTETUDEROHOCBSGHRCROFVTNDVJWZMEKUUIOZZMSKXMABBMAWDYGAFHZFQQHFHDLIKPOXITYSVXRGKLBI");
    msg.max.assign("GYDBAMUQMQXBPOXLJKZUDYRDJTMPFRHDULFRYNZJQUOGPYEZMASISMAWFHGOCXWAATR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.757800595525);
    msg.setSource(29940U);
    msg.setSourceEntity(252U);
    msg.setDestination(26155U);
    msg.setDestinationEntity(219U);
    msg.name.assign("USSTHDAFJTDZLXEKLGNRODDGEKKNEFABCEYNPDVYVEGOZUOSTABJXKFJLHXVZJDDEAEFNMLFAFCEYHJMIWZVCPYJCUHBQXXVRGHGNAMTEQUBUWVBXDFIVYQFSOOQYWMOZPHQZTJVWUUORIKFZIDQWVMIAKXPUEOKMXDJAMCWGPKFGKBRRHBCWBLPGGZTSQIIBYQPTVJYNCSCLSPLHYRYITUSHCBIRRNJAZMOTMONMNRQLW");
    msg.attr_type = 212U;
    msg.min.assign("HBLEZEXVCAKIOLEVRXSBQZXENNEBUMTCHTQDDVPCXFUFBLNIYAAGUPGVKJCSUQAUPNOTXHRTJGWOOSRCXROCYWYXYDVREWQSLCWURVKZFDDJRXWTMBHDNBAJMEWCXIBQHMGEJKKTPHFNQ");
    msg.max.assign("GXJNDKRNEAUXQKIULYWKSKACNMMWTCSYOWNOQHUUZOYHQPCRHVNTMDFMCVKJGGJNPLSFEFBXLQKUDHTIAADXMDXIPGHCBPWUHVMQRNHMTVWCQROKPSEEXFILFLDRKEGKFCMXFSOLZYOWPQTVIWAEYOBLTTGLSTGJGZEPBZXXRBDIYIJYZZLZGFF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.0518252547718);
    msg.setSource(49896U);
    msg.setSourceEntity(30U);
    msg.setDestination(4648U);
    msg.setDestinationEntity(124U);
    msg.name.assign("UQFHLYCVADDARJYARGXGMPGCJBQNTQJSCSALNXWRSPIVYFWWRJURJQUMZPHZATEXENMLZDLCITXVUPUXINCMWTGMFBMXBAOQSBNKWFZNHIAHYPYDSHIXHKTOOMNCDKRVOOCGEJOLETRGPEMRFUQFDELMSJHYEAVIEBUGSVHDPWZIKYZCMLCKTPQEKQ");
    msg.attr_type = 154U;
    msg.min.assign("XJFMTCFZWDZULLLVYRRUDYYJVTIFXCQIHXBNUAZMOUTQOEI");
    msg.max.assign("YLHGKGAJRHSEOXOYQIIHLNRDWDJZDCLOQXKPEFVTDLZLDFISWXTBHBNIJUAPCRYDZQNMGGDNWYVUAAKDWOPNJPYLSPELJDUNMNZQHMYBFALBYWXHCOCEQJXIGBSFWMEKIUZSLGILOYKMTYNEFVOFEHBXCJCZCKTGMATKCAKSFVRCTPXQIRFPPAZUSXRREH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.331900617429);
    msg.setSource(39548U);
    msg.setSourceEntity(106U);
    msg.setDestination(45100U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("PSNKEDWGPTOBUSAJMKCWIBSYUEMVSGCRLUXCHTEJNVFCJLVIDMWULRMJDZHYGDRSNVCQHNLTZUIZQZOVYCXMXWNSCDFHCFKPARZJAKRRFKGNSZBMKZFRTXBXRGFWQIWJUIJLYBOOVFQMKXWWAQONHKYOZHXLOGPUATJDLJYHNANRZEKB");
    msg.predicate.assign("WOYYSNHZIZTEKZUMAUAUDOBKXHQETEQPQURTKMHOQWUTBCCIECVLWGMFPSVUVHIMORNLROVKCFPSVTGJYGXUJIOBCXDXYKQDDEQFYRQIKZSDBPSDNWVMOKAHDBHVCJAWZHAEPORBTJRGDXTLNJXTJZGMTGUNEYHXLKALWMCQVMXTSFLIBFQCCFWNQUBFWYSRJGESZBSNJOPFPIIFHOADLX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RBHVHZFLIHZEOIUOPNQLGQARLHBESBZVDNQRLIZVMMMTKAOLMMVRQRATMWXAOWUGHDKZMJSKGNDMZCOTECJBKYYNIPDLGNCVCXFJITNBPSTKTAKYVSECSKJXWQUVXFVUNEUOIAUPJQZBGRBUBLJCXQSYGFYZWFYLYAOTYPABENWKOIGC");
    tmp_msg_0.attr_type = 242U;
    tmp_msg_0.min.assign("TOSWWVQWXAJZLVTTRBNHRALRVXOPCCMECKZQRUDPGTZYSDZJXHAGQUSYJRLNSWMZPFOLJVBYOTBGMOXUTXVEQUKNASAWTKIRMOQHJXZMBVGEGUIFUHLYWMYDSNGARZOLEMYKFBIDTHCXKCNKFDWN");
    tmp_msg_0.max.assign("CHFMLFYWHCIOSGRRMGZVDXWRLMZYAZCPOIXWBBQZQNBZCWOUMYKHWGLDNWSOQKVDZTETGBEAOBDFWMVFZTPJPRHTTAMVHVARQYIQRPKXHQPVJOS");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.67777332249);
    msg.setSource(1054U);
    msg.setSourceEntity(204U);
    msg.setDestination(24653U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("NWUADAHDAWIQCFBHJFXNAGTAKTCOKHSSYWKBNRMUDWRGRMMEYNNSOYCFPDXPNOBQTVIIVCGVCVHLKZSKLQIDRDXDHUXFYRSNWAOAZEEYJZZJLTJNLPOXPMKIGUIOGGFHHPPTPBMHILKVVPJSQZKRQYFESGIJSRLUPYTOOLMXRQGLRJFXDVHQBZEBNUQFCFIEDBPMCXTAEEWBBNXTSFSYH");
    msg.predicate.assign("ZKIKTVAGCPOQGCPAMKUFVWXHQAWDTPBZPTSLBZNMKVFYRYPBXJWMEDDUCOKHBOLOETFOGWBYCAAFUESJLCDBPTCCUZYWIKHMYJMIJZGTTROISOIDZPQNUCHKYRSFEPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.00772499714098);
    msg.setSource(18934U);
    msg.setSourceEntity(14U);
    msg.setDestination(10884U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("NWOSJWVUMFXLJIFQST");
    msg.predicate.assign("JVZPJGCFROTM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RGFJKZNRJGXMORVSZBXZXTUASMSWLYUFDZDNSOGECAZMNQQMBHWYLJEVNYEEKKJPHQWRAUWVXTJWPLHCGDANFUWSTLOBEQFPJHUDTBYDSGXUQIGZYXNELXFIVECGKIJINICIQKSEBCEDPIOKOMWAQVGRCNMVMADYPKULRTCCBTZKYQFBURTCCJHIJQU");
    tmp_msg_0.attr_type = 171U;
    tmp_msg_0.min.assign("OSRNTZMYQYRFBSKZJUITIHBNNFXUMGADFPZZGMCIECOGANUDQOZEPTEKOYFJKYTKSCNAUSQKBSBPDIRFHICXNLZIESHVLGMDRWTIJQJPWZBJWMGKYYATMHQYCBEWVQBHFHUUWCHQGAATXLDY");
    tmp_msg_0.max.assign("IGRJGCWXVLBANFD");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.248654809443);
    msg.setSource(20519U);
    msg.setSourceEntity(114U);
    msg.setDestination(18900U);
    msg.setDestinationEntity(240U);
    msg.reactor.assign("XCEFPJNSIOJUAGBVELMDVPUBCXJHRZQOMZOBQGLEUDHJMKSNBIWBSMXGRMIVUCIDDTLYAAGWLZAWAVDQVEDCGMIMXFPHXYZTRXCEBFNZUPPUTKHMRUWTOAHJWNEYZSBKTWRSLEZFROWTEHOYAIKAUVJLSKEDGYCXRSHGJZBBQN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FLZBAXQKXUXHMGSEEXRBRNEZJZSDTFVGLAHSIVKHBDOTOHNPPBZADVVEFKUVEFSBMWOTRXPAKMZG");
    tmp_msg_0.predicate.assign("ULQVYGJQNWNOTPXMBYZEGAGJUHUMBZRNQIPIQNOYZMBAUCSDOUZNKSACYELHMBMSNEZQTSEXUTVCDTCJTAYJXILVEBTKFWOAIKWDWLPLGVUDGXPVADIDMXBVHJRMMKVMQNDEOUCQXHARCKXAEAXOQVKHYFHXINLZPRLJYVRHPOHJWGTRSZZWAZSCGFBDRTPLBEKUSFH");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.9882388084);
    msg.setSource(37333U);
    msg.setSourceEntity(69U);
    msg.setDestination(48862U);
    msg.setDestinationEntity(61U);
    msg.reactor.assign("BLAWMHUFYFQDCMXZGSYWVEAAJBASTDIYMPLCDOTIJTYYNQEWLPVKMOXRROQERMUMHGVXONDBOEQBNDIAKFSZLKUGHASSQNKZNOZJPMDZPEGOYYUGRHSXXJKOGRNFXPEWUNPBACDBCXZYZTLVNTNGIFGSQZJHPRDIVJFCCCIXTYLSKQQBPLTBKTNTPMFFOXXIVKJKMZEAPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.612912650288);
    msg.setSource(45123U);
    msg.setSourceEntity(57U);
    msg.setDestination(38429U);
    msg.setDestinationEntity(158U);
    msg.reactor.assign("HVZEOTORWABLYEQIWUWASICSFNUZGJANLRTJVSHEDBQWYQJMIDKOCOQHADGNUFHMRVRLKPBMCSXREYRJWKKDZPDNNKBCGFGXMKUHAXFORQBLTKFRSCJHJQSIZVNJMXPZSIDGUIILAPUN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KAOXIJWFFFYHXYMCPLILTXRMFMPHIPYUODNCOLUVECGNDTKELXFWWGQSHARXUHWQRYHYEB");
    tmp_msg_0.predicate.assign("JLBPWZYLKLXZBXDYQAHKXKSAVPPMDJKQHGJZQCGNRFBEEZBSBITAAETKFYWMXOEHAMGBLXWXVNNJESRUVEIYOUUNWUKQWNYXZZIUBGWDLCFLPNTLXFSQCVJOTOVGDDHAMYKDKZTNIGAJHSRPMDGFJOINYHZHOYTFV");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.495736735212);
    msg.setSource(7889U);
    msg.setSourceEntity(81U);
    msg.setDestination(63738U);
    msg.setDestinationEntity(41U);
    msg.topic.assign("CIHEMIQJARWLORACPPMXWPJGLLHPEP");
    msg.data.assign("UIHOQBZTOAAXHWKDEWNZSIXVILWBELLHMENCDRHYOXNRCBMHNOOMUKGVKSXLAVSBHKCMFATPXTGGUIJCZYEARYZKKQITMUCZDFPEVFJRWJUQGXLDMEYGDHHAMAQQSQYRCAFXEVWQWGHZNRWWZOPLAETIIDZTDQSBJRUJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.534575206968);
    msg.setSource(11329U);
    msg.setSourceEntity(91U);
    msg.setDestination(46906U);
    msg.setDestinationEntity(133U);
    msg.topic.assign("IXKMZIMZKLQXLSREHSRTUYAPCAFDEWZNTHSMTXOJCKZLFLAVWAVWBNIDREWVSUZNHEPNYZEZTQPOVQFURNJQVFVWHEQMGVRDJSBDNBWCKRLFEIEMLNGDZROPGJAYIDPLBMOTICJUKPDBAJWOJNRAYUTXOCKGFPFMYRJVUXGHUUYTNHKSEPTVLFJQQXZBEHBCUOBBVYAPYGFRLOGMOUCCWZTQLABDSSDTWWICXGGGHIMKOIKHQJ");
    msg.data.assign("RDXOEARGIXCHOZOZWUIPNEXTDZOZGSQQRLFGCTJZNFBHBQMYVSCRFJHZLWDHRCOYCUSAFDKOGZTGUMEFXZYTUJWBDYTB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.120301191594);
    msg.setSource(22544U);
    msg.setSourceEntity(178U);
    msg.setDestination(8883U);
    msg.setDestinationEntity(233U);
    msg.topic.assign("UIUGYKNBDRZMXRLYZZKJUKVCFCTOLWEWMRQORBHLNGLHAJTOOGOQPINVPOWYXRYYGOOFGDTC");
    msg.data.assign("YNEEGUABBTYPIIVJLRKBQXDPYRSFUGOAGJDYTJUNZTSZMPZLXUIWBWLGVNMHYJPMIPENFULTFAMBZBWDGTAHFXQECJCSQKPFVWHRKXNDUBCVBHPOHSFUIGVKWQZXQHSQRFXZUKKPVEFZRBRIZKZGNIEWODTYIQQGYODSXMHDIHMMXLOJTWHXVYCSXWVWELDOSCSEJPWSRNFOQUOGOJARCYBAGLAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.434940554377);
    msg.setSource(56239U);
    msg.setSourceEntity(36U);
    msg.setDestination(33764U);
    msg.setDestinationEntity(188U);
    msg.frameid = 167U;
    const char tmp_msg_0[] = {-87, 21, 97, 100, 0, 2, 115, -86, 92, 111, -30, -125, -78, -39, -33, -102, 89, 74, 62, -124, 46, 112, 103, -24, 118, 80, -57, 41, 74, -74, -43, -66, 11, 97, 7, -85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.727732074322);
    msg.setSource(38203U);
    msg.setSourceEntity(16U);
    msg.setDestination(57189U);
    msg.setDestinationEntity(224U);
    msg.frameid = 137U;
    const char tmp_msg_0[] = {15, -11, -58, -94, -1, 84, 42, 2, 43, 41, -16, -27, 10, -120, -124, 9, 113, -77, 109, 87, -8, -6, 31, 118, -34, 27, 16, -44, -43, 34, -122, -35, 30, -78, 3, -25, -125, -100, 2, 105, -37, 28, 47, 36, 82, 40, -113, -63, 100, -73, -47, -77, -29, 42, -114, 71, 111, 69, 91, -62, -14, -105, -28, -106, 67, -124, -35, 41, 107, -95, 44, 95, -8, 12, -50, -25, -5, 60, 101, 16, -80, 65, -73, 102, 49, 118, 32, 30, -26, 12, -88, 109, 17, 17, 67, -50, -13, 123, 125, -99, 9, 92, 100, -7, 118, 100, -38, 34, 73, -74, -93, 45, 111, -109, -8, 102, -30, -16, -5, 69, 68, 95, 99, 126, -55, -72, -112, 89, -113, -80, -48, -64, -44, 99, 80, -87, -67, 87, -101, 3, -11, -112, 69, -9, -63, 76, -14, 75, -34, -95, 31, -67, 40, -57, 50, -46, -102, 95, 99, 15, -56, 53, 114, 112, 24, 16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.421375963692);
    msg.setSource(28139U);
    msg.setSourceEntity(85U);
    msg.setDestination(40510U);
    msg.setDestinationEntity(14U);
    msg.frameid = 25U;
    const char tmp_msg_0[] = {108, 71, 104, -111, -26, 103, 26, -34, 20, -125, -44, -84, -59, -73, 103, -43, -119, -87, -85, -53, 33, 107, 68, 12, 108, -75, 54, 16, 63, -116, 84, 96, -72, 72, 36, -120, 54, 83, -70, -77, -53, -115, 81, 49, 101, 61, -89, 76, 104, 110, -94, 116, 49, 40, -99, 4, 8, 79, -29, -87, 96, 89, -69, -101, -45, 95, -72, 62, 100, 83, 51, -43, -107, -46, -123, 111, 35, 61, -124, 11, 85, 49, -67, -78, -93, -20, -59, -85, 86, 89, -48, 84, 46, -11, -70, 91, 0, -10, 10, -87, -116, 107, -63, -90, 5, -6, -119, 10, -40, -120, 9, -4, 36, 17, 13, -83, -82, -103, -53, 95, 107, -75, 115, -27, 99, 110, -36, 40, 17, -11, -31, 115, 75, 72, 25, 30, -12, -59, -33, -111, 44, 96, -2, 12, -56, -93, -80, -24, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.702499045983);
    msg.setSource(6670U);
    msg.setSourceEntity(129U);
    msg.setDestination(59584U);
    msg.setDestinationEntity(52U);
    msg.fps = 66U;
    msg.quality = 16U;
    msg.reps = 58U;
    msg.tsize = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.0428821528826);
    msg.setSource(23058U);
    msg.setSourceEntity(233U);
    msg.setDestination(51102U);
    msg.setDestinationEntity(185U);
    msg.fps = 240U;
    msg.quality = 161U;
    msg.reps = 57U;
    msg.tsize = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.807291690327);
    msg.setSource(41850U);
    msg.setSourceEntity(88U);
    msg.setDestination(582U);
    msg.setDestinationEntity(208U);
    msg.fps = 199U;
    msg.quality = 198U;
    msg.reps = 211U;
    msg.tsize = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.859215056221);
    msg.setSource(63844U);
    msg.setSourceEntity(75U);
    msg.setDestination(44385U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.743206313403;
    msg.lon = 0.483929485386;
    msg.depth = 34U;
    msg.speed = 0.889888140307;
    msg.psi = 0.611432934868;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.490023465408);
    msg.setSource(31373U);
    msg.setSourceEntity(8U);
    msg.setDestination(26064U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.753215951344;
    msg.lon = 0.186606288617;
    msg.depth = 9U;
    msg.speed = 0.478310444463;
    msg.psi = 0.725333994587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.619141691761);
    msg.setSource(22978U);
    msg.setSourceEntity(9U);
    msg.setDestination(33962U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.872549377271;
    msg.lon = 0.883215849594;
    msg.depth = 106U;
    msg.speed = 0.695859974643;
    msg.psi = 0.908567333527;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.131232240744);
    msg.setSource(12594U);
    msg.setSourceEntity(160U);
    msg.setDestination(52006U);
    msg.setDestinationEntity(67U);
    msg.label.assign("WOJDXZKFABUQWRRNDSAEQEBPCAGUOVXAHNDUPOXKJTKXCBLJKNXMVSAJPWPGQSMRFIWHPUGSACMIYJTIRS");
    msg.lat = 0.105275727509;
    msg.lon = 0.898837570632;
    msg.z = 0.930294010937;
    msg.z_units = 81U;
    msg.cog = 0.196324145815;
    msg.sog = 0.604077117093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.116111428888);
    msg.setSource(18336U);
    msg.setSourceEntity(20U);
    msg.setDestination(12365U);
    msg.setDestinationEntity(115U);
    msg.label.assign("DVVDHZPMERPGABEK");
    msg.lat = 0.996871857769;
    msg.lon = 0.651331626062;
    msg.z = 0.607774101663;
    msg.z_units = 87U;
    msg.cog = 0.648420631797;
    msg.sog = 0.437537485362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.658274560048);
    msg.setSource(47433U);
    msg.setSourceEntity(1U);
    msg.setDestination(51489U);
    msg.setDestinationEntity(207U);
    msg.label.assign("PZEMRTLFYJKATFAU");
    msg.lat = 0.651074878364;
    msg.lon = 0.821478962438;
    msg.z = 0.252235994241;
    msg.z_units = 199U;
    msg.cog = 0.149890656613;
    msg.sog = 0.0771476306112;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.0240957949434);
    msg.setSource(53491U);
    msg.setSourceEntity(190U);
    msg.setDestination(59040U);
    msg.setDestinationEntity(246U);
    msg.name.assign("WQCWFZMGKLGZWAKHJCEKLRSXEBTKRHJRGRMXQTVQUOWPFPJITVBPFICGRAVNQCPDINWJKWLQHOYUUZLRKTUMASKAGAWPZHADDYAWBSOXZCELXJAGFSXRYBMEBNXGTSNOCUNYMPIZBAVPMHTCQIZTLSO");
    msg.value.assign("SQTFNDVCCKBMABFEGZHWHILLOAQOLRARFLPRSPAGIXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.176270185884);
    msg.setSource(3773U);
    msg.setSourceEntity(148U);
    msg.setDestination(22669U);
    msg.setDestinationEntity(112U);
    msg.name.assign("ECPLAYQNOFBHSX");
    msg.value.assign("AQMJPWIIXTXUWTDTLMLGGKMSYUANZGBYJKVTWIHJPEBVJQEBWOKSZKZRHVPYVFSXNECQNXMZCTBGCINAOUUGOYFCLLRVBYPWYHRUVMHOPDAQLECRKKYPJGHPMARJAQWNWCJPTACFUJEXHNFFBESSRNSSGHTWKFSYOOKIUWMMDZDPYOOJVEXFUZLQCVEHPZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.207724359412);
    msg.setSource(29030U);
    msg.setSourceEntity(59U);
    msg.setDestination(14741U);
    msg.setDestinationEntity(19U);
    msg.name.assign("IVUNGVFYNVOLPKTVKJCLDXSCZQGFRSWRTYHILODJTIHOYDAOALVQNWUFWQGTMCWZEFKFPHBXRMZPXQQUMIRBNQELDDEHINTJZKIUSQPNWKDPHZJQZMMPUTNEWYJSZYDARUERSYUUYVAFLNAXHEBPSCGKMDLMOCVBPBJRGIESAAJXXVAOOBGGSENFODZWTKCMZNEELHGXHFGZTDCHCBLWJAGQMVPRBLTRKAKBUVXWIWYXBM");
    msg.value.assign("TYHCNYFWYUDPPYZPQNMQELFSORORKDUMSKNGOAKMJYRWMHEPJLLCKHUNZXHVKAGNAAMERGBQCMGIFJVRAITYCXENJOZZZSHWILPTTEDVXVXAFDTWRYUWOGWGJFOZBQDANWNHWUHJKGXPFEEUPRODHUEMGPBIYXPIMTBBMLDXSCLVAXQTCRCSUVBIQJFDAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.411233438407);
    msg.setSource(9982U);
    msg.setSourceEntity(240U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(95U);
    msg.name.assign("IVKPNJFWGGAMARZJEEQDKQXXBCTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.806441525624);
    msg.setSource(25449U);
    msg.setSourceEntity(112U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(150U);
    msg.name.assign("NRVRTWDQADGIXUPYNSRRVYKRYQAMAGGUUCVPBJYFVEECIXQZSFDOZHPGTHTWLYIORBKKFJIDIQWMHTHZDMUIEXTNBNOSMGWYRZYHUIOBHALZOHAPTKJVLGVSMXZTKDYJQRMJLTODA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.0760790202437);
    msg.setSource(8826U);
    msg.setSourceEntity(12U);
    msg.setDestination(62368U);
    msg.setDestinationEntity(32U);
    msg.name.assign("IZYPCGNUTKSQDQATDWRXFPVCQBQXYMPKDOGZLJPVZGVJWRXEFFUQSHBNSMLBCNIMATWDWOJXPGRHNYXNCRFDHSUZQQOFEFBMJMTHWEKDVXBWNCVSYGHLPLINKJBBAKIBZRZIQOSOHERUQGIHMAXJIZMUXGNUJSZVPZATSAEWPLOTRSSDDKWXYGUIRENKHKIYWLJRPHMTCJZFIFTWVCBCAXDLLYJYTVOYYOEFPLOTHMQAMUKUEABCUDEGRCOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.852931830508);
    msg.setSource(6082U);
    msg.setSourceEntity(85U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(68U);
    msg.name.assign("NOUGKTYIVPQ");
    msg.visibility.assign("QUDANRZHVIFJJCHXBJEFKXZYWVVWSKFUMPUEWTZCDLHRCKFDGGYLDBXLEHLTCOOIVMPGQLRHNMVHNUFQIYOORLZIMTWJLMYRXCTSUUHXSQBPTXKVESVNAARWOZADPSPHBNMZHQASSKLEQJOJYDMTHJBIDPOGQGGUNMAEBRFWMMNFCEAGTXTYIZXVBPFECYFRBNYKOENGSWDIQPRTKCPACRBYZJICNDKVOZAGW");
    msg.scope.assign("KNGJPHQXWPVEPMNSUVMZQSXNMGODICRVYFJIMNLUHLSBXTACXSQOPTUGZTAATTPCGKCXAQFTFBUYTKYQFYDGEVVHOFZZEPROSZSWRSQLZCJKWYMULNZKYHDRIAZKGRVEXFWEBHRYTUBHNQBBRCJINQWBQCDULLITGWCCKNDEAJANFEFEUEGSPRGYESOXHYMAKBADXJJOPIOXUJVCHIUGBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.911108924724);
    msg.setSource(48319U);
    msg.setSourceEntity(125U);
    msg.setDestination(65366U);
    msg.setDestinationEntity(81U);
    msg.name.assign("FFVJNLPEHOWJMTNMDAKSXARGAQQLZBUGCTGOFLFUQRYWDRKXHFEJ");
    msg.visibility.assign("WTNJVUPVCKEIUCAQGMEGJQAYSVFBBCAOVIBGNMIDEYKOXWSEFNRPJOVXADZUNPGIZLQFFZKJZJXSVFVWHRNCORUXCQTNRNKYTRVGMRAMQIUBEHHDOIAHNKXTTQWGYFCFBBJIOQDXBQUOGKJOHYZGYJPLAEMNQGXRFVWITSESDRTLYOOZGMKH");
    msg.scope.assign("GUAMWILXUQCDRWRUINYYZABETOSSBDRPDDROVTLBOWXNXZFVKGDWWIJYCBROIMMJQSUVOHWXQCTDFIPTZLNKTXVKHFJSPTASUVSVYEKITFJLELMYCZSCIANVPXAFPJMHNQMIHBYHALYFGKBPQPEPPQXZQGFXOFLGVYOXOLEHWJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.750031518331);
    msg.setSource(10421U);
    msg.setSourceEntity(13U);
    msg.setDestination(17597U);
    msg.setDestinationEntity(48U);
    msg.name.assign("OJGTJNHSXYFUEVTIGYMNQPPINLZKOUSYX");
    msg.visibility.assign("IRLNPOWXFIMTLLGLPORIWGAXBAIODETJNVOUDDRMZUIIFOFJAPKGTYUHCBAEUJHVYWNFCHLRTCAQCSKYNDSEMQOUJWWNXGVVQIMVKZUFOVZRZQFWNVVYYVUTZJHJADYQQFPYPREGASHKHWYCXTJNHOXUEBTMQNKJ");
    msg.scope.assign("VOHWQFDYGOMDJTAZPYAEMQTOSAKIGFTEQTOENYKAOTHGTPXKUWEKCVWQNSZJNMELSLDJGDYMGHCTDCNIZVJJGNIPRTKVPKHJEKQZNCDRDCFOXMUKNUFRXVWYULYBWSMSREYITQOCGUYBHBOSZRNLMPAAOBYCBMAVXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.157156880142);
    msg.setSource(60738U);
    msg.setSourceEntity(209U);
    msg.setDestination(44097U);
    msg.setDestinationEntity(54U);
    msg.name.assign("LNFCIVLLMTRYZWOTCZCPXSUAIJYBVRHLQEQEXZBKKZRYAYEXTNBHGFSQTHKQRANN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CZXCFQYPSPDRNWYWFZBNYWHGKARJJOUKXWBXKJZLOYAMCDLFIZRGQISHIQKAGNXCUSNUDDVTEUJKCNQGTSMLVPFCKHAAAAQVNUFUHRRWGQSHAAVOCAMNXVXVCLYCJBQBOBIRMYGXIZSZEYDNPTTIQMJOHGYRHXLTXDDZWBEESLXKDPVREZMBESEFVFTOKSOCVLLUOJFTGMPPYMNFEIPJDIQDHZSEUHTYVULGPEUQBHIZWNWOMBWFOBMRJJK");
    tmp_msg_0.value.assign("WYQHBVVSDJMUCLXXAQACDTGGYISXQVZSBWBOMEDIFVHASYTRCYGEBFYOXCIIQKXJTONMBKUHALGXTSCTKBZSJFFFEKTJWYTKWHQUWXGJIVGJNCBJYLDRZZNUWKKOKZGDTMFKPBIESMORMXCWERDETZNLOANMKPLUSPLNMTRGHCVDOJHNZYIIAGWFEOBQASEUHPBNCPPXNMQZVHRUPRIHQFALDVESJMPYYLVWANGPQXVRFOEUUDRCZJL");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.273634416087);
    msg.setSource(36207U);
    msg.setSourceEntity(173U);
    msg.setDestination(47631U);
    msg.setDestinationEntity(106U);
    msg.name.assign("YDRVXWZIGFBBBWVFPBRIYHHZWWMCJICRTUFRWREISAGPEJMNMQYJSGJORLNAKQVDKHGVDEAFHOFLBDHTRYTZBUDWQDXGXBMFLTFLDGNEAPSUJGMJKQJLZSAARHZCUDITCGX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZNHJHSDCKSLFPFEVHBKSERJBTVAEB");
    tmp_msg_0.value.assign("OWIQYIZKGCMYABLUNTTCGCCVDOZMUPSKJMCVWRMFFBFZTWAQEWBLILLZAYATAUYTSDNOCIDVWPFDYUKKQFNBSFJXXGOKXVSARZDRUJXVKORBTOISGCJZRNUQJOIBLEIEDAAIGRCTFPRFCEXESMDADPPJWPDYGQZ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.583949661647);
    msg.setSource(48404U);
    msg.setSourceEntity(119U);
    msg.setDestination(31701U);
    msg.setDestinationEntity(123U);
    msg.name.assign("LMRJDDYCYPHPTOIXEXNFDDROKAXJXYGHVEYMZJTJGMSTZLULQVJHRUKOQUECPRZPJRKLSYXDWRZOCVCJIUBEZTLSPYUXOQMFED");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MSXAPSQNNSLRBYCEGJEDTKOGGJFDEWKEIOTHQMLSVMPRDVBUBWBDZZUPJHIQFAIAUIKJZBOGKWVPJNGTJTVYNVOACXOTPUOLASEVZXUCHUJNLIGONARDFYYFTWFBWQKQDFRUENJRCBOTRZHJFYFLIMSHZOCBZIXWCXPX");
    tmp_msg_0.value.assign("IIILTCUEKVNMAQSMGGHRPXEDWMKCYBVZRFOJXENGQLFUXFMODTBWGOUASCTZKXEUZSVQLSQYIDGPRZQNUAABXNUEUCBDLGMFFNDHKTBHMLSRKMYYCPOJZYJGCSQTJADSTOYTCWWPDNFEYNSGJEBHFCELGOPBSFCM");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.546252052385);
    msg.setSource(9696U);
    msg.setSourceEntity(3U);
    msg.setDestination(25007U);
    msg.setDestinationEntity(206U);
    msg.name.assign("IXKQXDVDNCHOMQXCXUAYPAYGALFZANFGYPNJDPKVSOGMHLWZSASJVICHWLUBZJHJDMRZVGYENWGEKHEQIOBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.588521255497);
    msg.setSource(64449U);
    msg.setSourceEntity(32U);
    msg.setDestination(62912U);
    msg.setDestinationEntity(237U);
    msg.name.assign("OFJYACTIAVYNQHUPNZRGRXIEBCKKJBKJAHPAEGZWMJGHBPIHPSQVDBHOLXXRZMBFHGNWKABLMHGPPTYJOTFFDSESKTEDRXZNUTQYLPJDEKRBJZLVUWQHRDUJOTGHWOLYRUVNEFBPLDOOVMVBFYSVIMZFNSUYIZXNCETZRCZUJRVGESMXCRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.827442138658);
    msg.setSource(3043U);
    msg.setSourceEntity(39U);
    msg.setDestination(17648U);
    msg.setDestinationEntity(238U);
    msg.name.assign("OCZHRJDXRTIPMLRYAGRZMNNGMKXGDOSQPOWYUSPFJFWAUFPALJLLZAQKUERODWSCLPAYIZEFQZOUBMJTPIWPKVIEGZWYIRNQVIPAAWRZVQHCIYNBUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.141911694855);
    msg.setSource(49450U);
    msg.setSourceEntity(145U);
    msg.setDestination(46140U);
    msg.setDestinationEntity(6U);
    msg.timeout = 2556616032U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.519303184561);
    msg.setSource(757U);
    msg.setSourceEntity(40U);
    msg.setDestination(30719U);
    msg.setDestinationEntity(103U);
    msg.timeout = 2258312375U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.128498858196);
    msg.setSource(45273U);
    msg.setSourceEntity(30U);
    msg.setDestination(13291U);
    msg.setDestinationEntity(219U);
    msg.timeout = 1757611216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.547979976297);
    msg.setSource(43323U);
    msg.setSourceEntity(180U);
    msg.setDestination(59838U);
    msg.setDestinationEntity(194U);
    msg.sessid = 1220871807U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.329012142229);
    msg.setSource(12348U);
    msg.setSourceEntity(185U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(209U);
    msg.sessid = 1610209664U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.032051769082);
    msg.setSource(19339U);
    msg.setSourceEntity(57U);
    msg.setDestination(44924U);
    msg.setDestinationEntity(229U);
    msg.sessid = 3412427887U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.908540164491);
    msg.setSource(24268U);
    msg.setSourceEntity(140U);
    msg.setDestination(36246U);
    msg.setDestinationEntity(162U);
    msg.sessid = 2951897238U;
    msg.messages.assign("DQQYFCNJGZSGKBZHCWWCOGYWRVAPHEJNZQEGIAPVUBJWDICLOXHRLZIILNZKZDUMMTXHJBIPEUPNESLVFHAKDBIEKPRXVNEUYLBWXMLBJZRWOCVBEWRDPOFHTPZICFTXMZFXNGDSRVARHBCKZUYFLIKSQJQVPHDVPBDCQQFMEUKJOYLTRSTMOGXRGQQLNFBLEYNVXPTFMUSVGIAUTMJYTXKONMKRDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.810932242338);
    msg.setSource(11822U);
    msg.setSourceEntity(89U);
    msg.setDestination(62908U);
    msg.setDestinationEntity(230U);
    msg.sessid = 3060982076U;
    msg.messages.assign("TRQAQZVPBLVKRZASYXKNGTLCLJHQWEQKAIKNMZLGSPSKLHESQFRENWVMSHAMXUVDVZYYAMJASYEJRTGJZSFNJHUSDLNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.36837829814);
    msg.setSource(57719U);
    msg.setSourceEntity(200U);
    msg.setDestination(49790U);
    msg.setDestinationEntity(134U);
    msg.sessid = 2973091931U;
    msg.messages.assign("LWCSZTRPNXFUGIFFPZKLYSWJGADZNIQDEGTRQPIRAQBAHCOOMKURTYDRCXIVMDQRUEBZLBQJLYNXEFKDSNQHXTJPIVENKJOMFWZKCWLMYPHXOEZPHBFGNHPLWGCCWGCREGTMXSHQFCTMYVBYJXT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.647980034367);
    msg.setSource(26587U);
    msg.setSourceEntity(89U);
    msg.setDestination(1757U);
    msg.setDestinationEntity(137U);
    msg.sessid = 866953320U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.710226340462);
    msg.setSource(40518U);
    msg.setSourceEntity(45U);
    msg.setDestination(51339U);
    msg.setDestinationEntity(72U);
    msg.sessid = 702890973U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.332128961235);
    msg.setSource(20751U);
    msg.setSourceEntity(230U);
    msg.setDestination(52097U);
    msg.setDestinationEntity(135U);
    msg.sessid = 101370410U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.683000840945);
    msg.setSource(22895U);
    msg.setSourceEntity(229U);
    msg.setDestination(1693U);
    msg.setDestinationEntity(157U);
    msg.sessid = 1439670454U;
    msg.status = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.9739037935);
    msg.setSource(14714U);
    msg.setSourceEntity(242U);
    msg.setDestination(34129U);
    msg.setDestinationEntity(74U);
    msg.sessid = 3515996322U;
    msg.status = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.490616393439);
    msg.setSource(11755U);
    msg.setSourceEntity(104U);
    msg.setDestination(28303U);
    msg.setDestinationEntity(244U);
    msg.sessid = 3281025855U;
    msg.status = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.960424580991);
    msg.setSource(8791U);
    msg.setSourceEntity(195U);
    msg.setDestination(11542U);
    msg.setDestinationEntity(25U);
    msg.name.assign("BYAFSPCIFZCCHESTMPBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.898347633463);
    msg.setSource(8536U);
    msg.setSourceEntity(199U);
    msg.setDestination(57987U);
    msg.setDestinationEntity(17U);
    msg.name.assign("FHCCISNJKQDPSQWJOVBNCTYNOHADGEARELLYATIFBVHNZSVVOHMRVJSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.254576772268);
    msg.setSource(49786U);
    msg.setSourceEntity(104U);
    msg.setDestination(42209U);
    msg.setDestinationEntity(82U);
    msg.name.assign("UCHMUEHEUEELYPHWYRIXLRSLVVGOZGYFDIOASRBZPJYUIGZMQOOQVMPWTBKLMWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.73675406819);
    msg.setSource(17729U);
    msg.setSourceEntity(42U);
    msg.setDestination(40486U);
    msg.setDestinationEntity(157U);
    msg.name.assign("SVGRVLYTGBCARAYSTUYVEFVQOWLIFYTKTTZXQQZWJWGDZMDUOFLPGKNLIRZHJXAXELBJVQLEAIPQDLWHAEWGMFONNEPXCRJBXXSRPXIVBOLKYHBNWBYFJNOHHJBUTJLTMTCORRWHQFGJZOSDYODQEZFSWDNWGKNBKHUPPUFQACUIMZJDPZEJIGIZRTSMTEXQLRAHYQKOVCAUYPMMVNKPSCYABSCGXZAPEKDMRIDKUMMCUSUWKIGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.512364521335);
    msg.setSource(62811U);
    msg.setSourceEntity(12U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(28U);
    msg.name.assign("RHQBMYLAJHVUBWYAXNPSARKMJDIKGMHHMQRDCNFZCVISQLCLRTFGONJTCZXAXMQVXVAVTVOHPYFRYWWSFNMJUGVLQXXGGZBYJDKLWVDPKYSWBJEOXOUAOYMULHICOCWKGXOIIDZRUOZHQWBFPCNPURNYASEVGSDCBDHGFZERNTFQWKAQWSBLFZFOTMBBUICEKPPIUNSUQDDKEEKSUBAEJTPYI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.723075879996);
    msg.setSource(27120U);
    msg.setSourceEntity(240U);
    msg.setDestination(39795U);
    msg.setDestinationEntity(77U);
    msg.name.assign("AYPQYJCGXUVXFIOCRSRQZSNMRVEKVBYBZUTPVIDXYZWVHFKRKYPIRFTCZQROTSLWJVHBPVMYCQKPKVZTHFWIQABOKUUAXZFAFGKSOJAOXRUWLQNLHMPHKCGEINYAHQAOAZCQWQJLNSEKDBXZTKTONBSJMSRXYPGXSJMUBLAQFGNEHVGH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.466578905591);
    msg.setSource(6427U);
    msg.setSourceEntity(243U);
    msg.setDestination(16185U);
    msg.setDestinationEntity(167U);
    msg.type = 242U;
    msg.error.assign("KMRZWNEZKSQNPDWICAYBFXSJKZXMNRQGWFHELBVCVGNGFGFFBHBAULVTTHFLTRXMXQNJXDVSTPLHDQJOARLSUAYPIVOATEYIXVQVMRRWSIXQKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.748342682636);
    msg.setSource(30747U);
    msg.setSourceEntity(139U);
    msg.setDestination(31896U);
    msg.setDestinationEntity(115U);
    msg.type = 36U;
    msg.error.assign("BXQTDLVNQWAYYCPHMATHUEAWGPQDISMBGWURQKGEQMSOYPITXCDZPFPEEATXJJVHTVGMVOTOPUCPEQUINRUBRGBYMJXRMAJKZFCRLOVMYXIKHDPFZCTGHGIMRWNRBOLVZUNPHLWYDRQYVWZNNWIJSWANLBSXZUKMHKXJNLBGKBFOLOXZBSAQKAINCFLCPYTRKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.72597102266);
    msg.setSource(27594U);
    msg.setSourceEntity(137U);
    msg.setDestination(56013U);
    msg.setDestinationEntity(76U);
    msg.type = 129U;
    msg.error.assign("PVCZZTAZHWXKHLACAPFNEOWCBAODSVUUOMQIDSHCZSZJRSKZQBRWKGKFXSUHYUEYMRDUBIVABTTFIKAFVYMRRIMZJTPVVLGPHIJQSFKNDMCNNEGYQSOVMOUGTOERDYGPUOQJELHCLYAOXITRWXXXMWESCQBGNWBNRWXNBPQNHBKGLCWWGDEPVJUAPGXQIKTTDIZFEITVSMFRBKELPSJJRDJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.789265359786);
    msg.setSource(18173U);
    msg.setSourceEntity(145U);
    msg.setDestination(31202U);
    msg.setDestinationEntity(143U);
    msg.seq = 30199U;
    msg.sys_dst.assign("UCFTHNYCJLTMYLHQZIVADEONEWYSLHHAZDTPVISMSSGXKCUXIWMBEAUREMMUZRXSLRIOYCNXVPDXTYXCFOAPMMQRRUNGKZKWQMIZNDSUPLDXJYGQFCHLNPOZBRAKSOKIDLBVHWZQVJVGL");
    msg.flags = 89U;
    const char tmp_msg_0[] = {23, 24, -78, 100, 95, -27, -88, -37, 88, 1, 30, -5, 103, -21, -102, -16, -39, -21, -61, -23, 74, 96, -124, -83, -37, 13, 85, -59, -9, -103, -25, -47, -34, -22, 108, 49, -119, 1, 38, -88, 79, 99, -72, -116, -25, -23, 100, 106, 95, 115, -3, -127, 25, 54, 2, 52, 8, 100, 51, 116, -44, 47, 38, -2, -10, -66, 69, -76, -36, -52, -83, -109, 64, -91, -56, 19, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.595500774347);
    msg.setSource(39846U);
    msg.setSourceEntity(2U);
    msg.setDestination(36350U);
    msg.setDestinationEntity(126U);
    msg.seq = 34128U;
    msg.sys_dst.assign("LWERMHQDPZZEHBKOZAURXXSLLFOTKSRVN");
    msg.flags = 219U;
    const char tmp_msg_0[] = {-32, 102, 64, 47, -76, 12, -73, -51, -13, 42, 87, -103, -99, -104, 119, 68, -36, 103, 109, -88, 90, 11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.546041225605);
    msg.setSource(16534U);
    msg.setSourceEntity(225U);
    msg.setDestination(30722U);
    msg.setDestinationEntity(192U);
    msg.seq = 57607U;
    msg.sys_dst.assign("MWWWYECSJFFRHQUQCOPWGXATCEDXNAHYSBGKKIXSTDYEZPNIAZRPKQMXEPALNFYLTTWCVRBUGEIASIBDXLKXPWUYTBWRMLPRBZAKTTERHWSMQGIHVMNLRJYEHGDEJJQUIOQTFKPPZNBKVMXEUGUCAZAOUDLUZCGIBUAOLRJOODEFDWNMHFWHIYBTVCQCXNAVJLUXFBZNGJVCMYJQSTVFMIH");
    msg.flags = 236U;
    const char tmp_msg_0[] = {29, 45, -100, 92, 6, -31, -51, 45, -90, 61, 65, -114, 40, -110, 82, -112, 19, -125, -89, 121, -11, -37, -5, -6, -31, -123, 21, 4, 95, 93, 109, 78, 48, -121, 19, -23, -128, -43, -123, -74};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.034782082876);
    msg.setSource(59409U);
    msg.setSourceEntity(79U);
    msg.setDestination(35791U);
    msg.setDestinationEntity(157U);
    msg.sys_src.assign("MHTJOCCWXLKCPQUNVDQGSSDUUDEMZVVEBGXINFUKLBALZXHLWELARDDGWFHRKGLZSBUZHJCJNAHAMGXMMKRTMCTURNXKEJLAWCYFEITYODZKGBFYOPXWAGJYMVQHOBYSDVOQ");
    msg.sys_dst.assign("TFLVHIDYTXOBWSNQSFJZRNQUNRVEFPQMPYYWVXJBLKLWDAVJXDPGLRHNKQCIUVIZSYIALXWBWGSFUOPHWWKYCCNKEOXKAECGZEUORZKJTSYSPBMCMWTLDWCPYLIHCUYZXSGMNPZZQORVBDHEJITBYCEXIPUFCNPGDETUHMIMAEANVWABRZLDNYMKQDRLXZ");
    msg.flags = 36U;
    const char tmp_msg_0[] = {13, 65, -103, -84, -79, -46, 118, 98, 53, -24, -96, -1, 57, -46, -50, 28, -14, 77, 24, 81, 67, 82, -50, 110};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.380110750738);
    msg.setSource(42937U);
    msg.setSourceEntity(42U);
    msg.setDestination(50215U);
    msg.setDestinationEntity(160U);
    msg.sys_src.assign("JVAADBUPBBSPXKYVCZSEJOBJZZHSLCHQTVVUBPTMDUVFSTKYRAFFIOBIZDUIHQHFDPRCWYLIBDGNPHPEWJUNIQLQXCOEZRJMPJUALXOZXRQKYTTSYHZWRGJIOSNQDASCAVXXYTXQSXHYIWFOTVPDMCTKUYACKBDWEGUVPQBPLZNOFOMRNDWAWGZHOGSXLEJTHYMKNNTUIGRQLGSFGQGR");
    msg.sys_dst.assign("PSNSJMLINKGDZWNEFJVKSOLSSTNUVYDZFCGGTPBQKMBZWNPKJBMAHYIJFDYAOURCNKIGPVNXWZTOMHTZQGXKPDWIXQBKRDAYUATMBVJNYYECEDTHHZBEFOUQLBGXVWBHLUGPVGBCKYEMHPHFCVBSTIWF");
    msg.flags = 213U;
    const char tmp_msg_0[] = {11, 116, -37, 83, 49, -75, -110, 113, 70, -62, 122, 37, -53, -43, 60, -62, -11, 81, 39, -2, 47, 119, 28, -119, 91, -30, -105, 96, -93, -78, -26, -78, -102, 13, -31, 36, 51, -22, -81, -6, 80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.121330169202);
    msg.setSource(46521U);
    msg.setSourceEntity(22U);
    msg.setDestination(15837U);
    msg.setDestinationEntity(185U);
    msg.sys_src.assign("DVFVXBOAGVZLZHJLBOOPUREMVHQCNWNSPNTYXUGDMFGGMNMIMOARXFRTENHXUHDYFQVZUVRJQDXOOACXHPEGSCDKWJSVNWEAQQBYIEQE");
    msg.sys_dst.assign("JKJYJNQQMIUROKEYSRICATWGLOXAMNFEZUGEBNHCKHBJXBNVYFZBQJSMHDKHZICDCXAPQTXDYENOPCIOYFKKQMUHBJHYGPQWATXWOSISCQPPMWGNRRERLHUTZRGJUCKKRAXFHOUCZWXOOBJIIIGLRNVXNLDJVKLILPZVSTFXESWFMYNSZZYLZWMNTQPXGZWLDLEPCFYUVQTUHDFVBFCGVEBYPAPQVSV");
    msg.flags = 206U;
    const char tmp_msg_0[] = {60, -75, 102, 55, 115, -115, -99, 59, 24, 10, -35, -77, 105, -124, 102, 24, -128, 10, 53, 63, -69, -60, -122, 25, 111, -92, -40, 48, 4, -7, -88, -78, -37, 73, -40, -112, -3, 64, 57};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.444457501348);
    msg.setSource(15599U);
    msg.setSourceEntity(17U);
    msg.setDestination(60960U);
    msg.setDestinationEntity(244U);
    msg.seq = 3622U;
    msg.value = 162U;
    msg.error.assign("SYQJMRWVTLWNERAXDRZICCBXBJBQXDGNNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.566668809803);
    msg.setSource(4175U);
    msg.setSourceEntity(75U);
    msg.setDestination(60345U);
    msg.setDestinationEntity(21U);
    msg.seq = 40764U;
    msg.value = 133U;
    msg.error.assign("ISCYYAPSLSGOBBVMOVPFWVXTUIYUALOPTLAHWQACSAHGDTCOLJMFXNCNFNNBROKGMERFJWCFOYBYRYUCCDKIREMJKNUIQVJITSGBMYKRDYYPHMZDHKWTQWFPDEEGPZBMTXVWZRWJEDVPZOOSZHWXRWRJGRDPBBDNZKYUTKGNVVUNFXTBDRTZJXFILHLKMLCONGMAJXEQFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.0125701113305);
    msg.setSource(14129U);
    msg.setSourceEntity(171U);
    msg.setDestination(52492U);
    msg.setDestinationEntity(170U);
    msg.seq = 17076U;
    msg.value = 13U;
    msg.error.assign("HNDXEBNEBUMBJFXIKJRCADSQADDXPPIGDNTUWTGFELZEZDZLANCZRTZPMNVWSHCJVDLPDLEQNNVVKSZIJBMQCUGSXFQVFYHFQGAJFJLVEROBHJDPGQYOVURSMAUGOXSUMSHMHZWYEKLZNSTJRNQKVAXGHRMIIOETOBACCLUYMWBLPSYDJYCXWKAFMTKPRUIWBKOFUYCIFLIHOAYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.175002025472);
    msg.setSource(9184U);
    msg.setSourceEntity(125U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(183U);
    msg.seq = 41741U;
    msg.sys.assign("VJLKWFYZDSCNTBTIYDQRDLIUZOBAUVUHWUGQSSEYTQEIKPCCXCHUDPRYQDBRAXPEKXQOKPRKVWTANXGKILYMXZBGOLSIPZGBDFNTRYWZDPNDMCAEMJAXTIIQEIBGKSUETAFJPYFLBDEGUJSTJSBOVXENRAQWRVMJNVZVOTMPMBMHEWFTFBMLAKMXMWIFUJHHZUVZWLEXZGJ");
    msg.value = 0.0582822997797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.690469919695);
    msg.setSource(57234U);
    msg.setSourceEntity(17U);
    msg.setDestination(39646U);
    msg.setDestinationEntity(45U);
    msg.seq = 18523U;
    msg.sys.assign("WSMPWNLKBXWHNCOIYGURRHQZPMVXXELIEAMTUCHRAFKDDOSFCLIQEFVSTNAZQKPMLZCVIAPZHOAYJGVWGQJYJMLVXBTBQHMOEGHEKSKPYHRVCYJZWDARPFWSOQZTSPYUFHWCFGTUGTDGMACMXEYPJSCJ");
    msg.value = 0.967267419324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.319879953213);
    msg.setSource(41843U);
    msg.setSourceEntity(132U);
    msg.setDestination(24172U);
    msg.setDestinationEntity(193U);
    msg.seq = 28201U;
    msg.sys.assign("DIKJWGLPSKJEWDMMODZYVFUTIEAHDZLGFQSNELBCBDAXUYOIMNCDHWNBIZFTCMMVMYRPECVQLZVRQZKAWWWBRXYCJMUJXNOTQPIHVFJGKWCETPTBXBDIAKRARKEGALEHIVLSIHBOUSXYCBGXONLAAHRROKZGLYBXVZJEEWZQPAPNGSIJHURUYNBQUKKTWSZRVCFPHXTUOTGHTNMYONPDMRFWQQJDSFYSGKQGYJFPCFQNFXMJ");
    msg.value = 0.416835871321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.441746800793);
    msg.setSource(49584U);
    msg.setSourceEntity(235U);
    msg.setDestination(65169U);
    msg.setDestinationEntity(186U);
    msg.action = 231U;
    msg.longain = 0.162762758612;
    msg.latgain = 0.779406461329;
    msg.bondthick = 3734059731U;
    msg.leadgain = 0.0908365167165;
    msg.deconflgain = 0.193320135973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.652001581177);
    msg.setSource(14262U);
    msg.setSourceEntity(136U);
    msg.setDestination(20321U);
    msg.setDestinationEntity(222U);
    msg.action = 193U;
    msg.longain = 0.891996526005;
    msg.latgain = 0.252402032965;
    msg.bondthick = 2919350318U;
    msg.leadgain = 0.19647968083;
    msg.deconflgain = 0.133084714343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.659527845844);
    msg.setSource(25199U);
    msg.setSourceEntity(142U);
    msg.setDestination(5244U);
    msg.setDestinationEntity(148U);
    msg.action = 35U;
    msg.longain = 0.032439223216;
    msg.latgain = 0.155994460065;
    msg.bondthick = 3108272578U;
    msg.leadgain = 0.986303386927;
    msg.deconflgain = 0.280130323858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.049664552302);
    msg.setSource(44648U);
    msg.setSourceEntity(247U);
    msg.setDestination(58077U);
    msg.setDestinationEntity(123U);
    msg.err_mean = 0.905778609361;
    msg.dist_min_abs = 0.261528239709;
    msg.dist_min_mean = 0.692953989855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.180146815691);
    msg.setSource(31337U);
    msg.setSourceEntity(9U);
    msg.setDestination(18097U);
    msg.setDestinationEntity(129U);
    msg.err_mean = 0.191987274197;
    msg.dist_min_abs = 0.152321805511;
    msg.dist_min_mean = 0.472081932221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.106563419406);
    msg.setSource(26157U);
    msg.setSourceEntity(228U);
    msg.setDestination(2718U);
    msg.setDestinationEntity(85U);
    msg.err_mean = 0.865990548071;
    msg.dist_min_abs = 0.919870075829;
    msg.dist_min_mean = 0.677389795597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.271173567411);
    msg.setSource(23121U);
    msg.setSourceEntity(252U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(105U);
    msg.uid = 59U;
    msg.frag_number = 197U;
    msg.num_frags = 128U;
    const char tmp_msg_0[] = {-29, 32, -12, 115, -123, -70, 44, -76, -67, -44, 60, 27, 125, 24, 33, -86, 11, 0, -55, 4, -99, -2, 25, 79, -39, 110, 102, 125, -98, -103, 90, -70, -3, 94, 114, 25, 51, -16, -1, -18, 115, -50, -26, 126, -115, 36, -69, 45, 34, -12, -51, -16, 21, -62, 71, 20, -32, -95, -75, 90, 52, -37, -55, -81, -108, -74, 55, 73, 58, -80, 11, -31, 122, 7, -106, 123, 82, 20, -69, 39, 110, 66, -121, 112, -10, 44, -111, -70, -55, 93, 4, -19, -71, -29, -103, -71, -63, -78, -3, -85, -89, -120, -11, -86, -48, -84, -21, -42, -81, 3, -97, -44, -125, -38, -73, 56, -42, 59, -48, -100, 53, -39, 126, 91, -59, 16, -118, -59, 71, -18, -110, -59, 9, -15, 103, -124, 1, -122, 80, -46, -53, -15, 54, 14, -62, -36, 47, -58, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.521679829535);
    msg.setSource(41334U);
    msg.setSourceEntity(182U);
    msg.setDestination(62216U);
    msg.setDestinationEntity(40U);
    msg.uid = 230U;
    msg.frag_number = 63U;
    msg.num_frags = 206U;
    const char tmp_msg_0[] = {36, -55, -120, -124, 88, 23, 1, 74, 25, -38, -118, -11, 119, 73, -92, 71, -57, 65, 76, 123, -99, 113, -86, 32, -34, 124, 30, -82, -103, 54, 98, 13, -6, 122, 25, -115, -15, 97, 25, -18, 109, -124, -31, 41, -67, 51, 27, 51, 115, 31, 80, -29, -95, -51, 4, -4, -30, -92, 68, 62, -10, -57, 58, 87, 29, -60, -43, -56, -76, -110, 110, 79, 45, 85, -59, -13, 124, -89, 114, -12, 11, 69, -27, -49, 68, -86, 64, -96, 110, -78, 5, 94, 49, -100, -5, -85, 8, 12, 110, 15, -42, 2, -103, 45, 46, -67, -15, 120, -112, -70, 75, -56, -125, -36, -105, 25, 23, -48, 27, -3, -6, -1, 106, -16, 42, -66, -9, 2, 61, 15, 87, -6, 42, -124, 82, 67, 78, 121, 26, 47, 119, 78, -65, -92, -127, -19, -29, 89, -104, 37, -34, -17, -31, 2, 0, -86, 105, 85, 71, -80, -101, 37, 16, -13, -74, -63, -105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.0122028657273);
    msg.setSource(12918U);
    msg.setSourceEntity(32U);
    msg.setDestination(44266U);
    msg.setDestinationEntity(190U);
    msg.uid = 215U;
    msg.frag_number = 231U;
    msg.num_frags = 24U;
    const char tmp_msg_0[] = {54, 47, 65, 85, 46, -94, 97, -42, -25, -97, -34, 48, 91, 114, -125, 101, 36, -18, -8, 21, -105, -112, 109, -125, -103, 5, 121, 17, -125, 6, -120, 85, -126, 64, -89, 15, -123, 21, -121, 71, 32, -19, 16, -124, -59, 34, 82, 19, -32, 75, -121, 71, -89, 92, -61, -35, 3, -33, 83, 34, 77, -43, 18, -111, -60, 4, -64, -50, 48, 70, 6, -94, -18, -94, 45, -22, 59, 104, -3, -94, -112, -72, -41, 90, 116, 22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.394083281469);
    msg.setSource(25326U);
    msg.setSourceEntity(108U);
    msg.setDestination(54032U);
    msg.setDestinationEntity(184U);
    msg.content_type.assign("AJOHLPJRWOFBBCHLCWUVYIIDAGJTNZAVREETGZJBNEFUGBYXDHEMBSGFBILRQKKECZMLJHGWXDVQJKZNKVCKKNCNEQBTWBAPLPPADWKXXSYHSGIKWOAOUGXYUJDQWHPFYKMXSBQUSIZNXNDUD");
    const char tmp_msg_0[] = {15, 90, 99, -13, -61, 41, -108, -84, 75, 26, -91, 91, -95, 100, 62, 121, -96, 59, -92, 102, 8, -2, 16, -12, 121, -120, -41, -27, -40, -94, 30, -96, 28, 112, 72, 78, 39, 9, 39, 55, -126, 87, -4, 72, 49, 44, -70, 0, -56, 115, -35, 113, -31, 55, -62, -15, 9, -6, -35, -97, 108, 15, -56, -14, 57, -68, -79, -96, -87, 100, 105, 84, 98, 87, 85, 82, 63, -58, -104, 59, -21, 0, 72, 11, 60, -92, -80, -59, -122, -41, -81, 2, -91, -63, 116, 28, 58, -58, -31, 23, -20, 0, 36, -69, -84, 29, -14, 15, 19, 22, 60, -15, 31, -44, -48, -5, -16, 10, -38, 52, 20, -81, -75, 35, -27, -12, -21, 11, -124, -59, 47, -40, 83, 56, 105, -56, 88, -99, 109, -122, 84, 65, 89, 101, 4, 75, 2, 63, -21, -20, 120, 92, -91, 58, 81, 125, -85, -28, 26, 104, -49, -103, 114, -118, -96, -1, -85, 7, 1, -21, -23, -38, -22, 71, -53, -96, 90, -99, -87, 92, 3, -86, 125, -54, -111, 100, -23, 35, 81, 4, -123, 93, -90, -122, -54, 122, -17, -72, -16, 88, 111};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.756213098086);
    msg.setSource(27376U);
    msg.setSourceEntity(222U);
    msg.setDestination(21936U);
    msg.setDestinationEntity(43U);
    msg.content_type.assign("ETENYDUSNCZYUTUWDQWDDISOIQIVNJVTJOGBTGFHTPQCDOAMMSEZZCTFIHSVCQMLBDPGEBEAJOZHLSWCRYELCMKPLHNBRLPQGUQRGFGIFMLRXWVKCJUOYFSDFPXZJXJ");
    const char tmp_msg_0[] = {124, -1, -55, 69, -49, 22, -8, 45, -48, 89, 107, -124, -80, 114, -116, 63, 52, -66, 44, 32, 124, -68, -95, 33, -12, -30, 97, -4, 57, -124, -60, -91, -94, 27, -68, -24, 40, -67, -128, 36, 38, -119, -63, -86, -26, -48, 76, 93, 117, -11, -46, -49, -43, 120, 46, -63, 52, -78, -4, 71, -6, 120, 106, -42, 100, -13, -74, -87, -55, 38, 34, 106, -127, 124, -28, 41, -82, 0, 13, -56, -98, -3, 124, 11, -39, 120, 29, 82, -68, 0, 30, 40, 113, -86, 85, 126, -119, 108, 54, 73, -121, -109, -93, -120, -128, 111, -34, -97, -104, -85, 41, -37, -26, 98, -84, 51, 114, -107, -89, -66, -22, -8, -21, -10, 26, 120, 40, -33, 7, -105, -25, 29, 7, 65, 97, 92, -2, 54, -23, -15, 47, 108, -96, 92, -43, 59, -50, -109, 22, 51, 101, 109, 11, 35, -79, -109, -56, -6, -20, -35, -73, -40, -17, 80, -17, -36, -92, -14, 115, -101, 125, 111, -52, -11, -122, 126, 79, 48, -28, -12, -89, 82, 58, -55, 117, 38, 98, -6, 56, -77, 40, -23, 86, -10, 22, -55, 60, 30, 59, -124, -112, 73, -63, -5, -3, 26, -103, -36, -60, -110, 71, 51, -108, -22, 58, -30, 113, 120, -38, 21, 43, 124, -96, 59, 15, -78, -49, -11, 121, -63, 108, 103, 16, 120, 126, -112, -68, -105, -124, -68, 90, 43, 8};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.487527299376);
    msg.setSource(32537U);
    msg.setSourceEntity(7U);
    msg.setDestination(7966U);
    msg.setDestinationEntity(74U);
    msg.content_type.assign("DHLPITNFXPMCYXXSPZXFYGGLRYTGFFTRWGCSFSDAKUJJVTXLLBPZUBHRNEFDVJ");
    const char tmp_msg_0[] = {126, 41, -75, -95, -127, -100, 118, 73, -91, -63, -44, 42, -62, 49, -75, 76, -42, 58, 55, 33, 26, 111, 18, -116, -52, 96, -88, 94, 123, 114, -94, -16, 48, 61, -121, -8, 6, -1, -18, 59, -25, 22, -66, -128, -66, -27, 16, 94, -63, 28, 36, -84, 59, 51, -12, 22, 18, -31, -112};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.766591917619);
    msg.setSource(61626U);
    msg.setSourceEntity(2U);
    msg.setDestination(31478U);
    msg.setDestinationEntity(60U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.00617819020486);
    msg.setSource(9011U);
    msg.setSourceEntity(239U);
    msg.setDestination(20943U);
    msg.setDestinationEntity(85U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.869317388231);
    msg.setSource(10055U);
    msg.setSourceEntity(74U);
    msg.setDestination(32883U);
    msg.setDestinationEntity(0U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.587562983515);
    msg.setSource(42261U);
    msg.setSourceEntity(62U);
    msg.setDestination(13236U);
    msg.setDestinationEntity(133U);
    msg.target = 12329U;
    msg.bearing = 0.842952920026;
    msg.elevation = 0.455216809779;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.437535409275);
    msg.setSource(27199U);
    msg.setSourceEntity(26U);
    msg.setDestination(62703U);
    msg.setDestinationEntity(254U);
    msg.target = 51219U;
    msg.bearing = 0.276130223375;
    msg.elevation = 0.0706799988612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.455651143355);
    msg.setSource(71U);
    msg.setSourceEntity(133U);
    msg.setDestination(40230U);
    msg.setDestinationEntity(220U);
    msg.target = 55724U;
    msg.bearing = 0.384906512633;
    msg.elevation = 0.048049057824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.918599513562);
    msg.setSource(55756U);
    msg.setSourceEntity(145U);
    msg.setDestination(7816U);
    msg.setDestinationEntity(201U);
    msg.target = 26973U;
    msg.x = 0.589918578232;
    msg.y = 0.648727456378;
    msg.z = 0.760593359643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.343860661453);
    msg.setSource(4137U);
    msg.setSourceEntity(3U);
    msg.setDestination(707U);
    msg.setDestinationEntity(152U);
    msg.target = 38997U;
    msg.x = 0.697524997995;
    msg.y = 0.248993920638;
    msg.z = 0.815328727344;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.567229713645);
    msg.setSource(46025U);
    msg.setSourceEntity(242U);
    msg.setDestination(26219U);
    msg.setDestinationEntity(126U);
    msg.target = 51904U;
    msg.x = 0.0378322898188;
    msg.y = 0.0175803222715;
    msg.z = 0.328754367687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.573375480153);
    msg.setSource(30081U);
    msg.setSourceEntity(39U);
    msg.setDestination(17117U);
    msg.setDestinationEntity(140U);
    msg.target = 62650U;
    msg.lat = 0.0786135457832;
    msg.lon = 0.162522372967;
    msg.z_units = 20U;
    msg.z = 0.776936547157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.924386130429);
    msg.setSource(36240U);
    msg.setSourceEntity(235U);
    msg.setDestination(9474U);
    msg.setDestinationEntity(4U);
    msg.target = 30552U;
    msg.lat = 0.0780841282016;
    msg.lon = 0.757817747181;
    msg.z_units = 248U;
    msg.z = 0.323822542017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.699311199646);
    msg.setSource(42028U);
    msg.setSourceEntity(249U);
    msg.setDestination(10976U);
    msg.setDestinationEntity(162U);
    msg.target = 16439U;
    msg.lat = 0.267876794274;
    msg.lon = 0.668478685887;
    msg.z_units = 182U;
    msg.z = 0.204244613219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParserOutput msg;
    msg.setTimeStamp(0.722684089091);
    msg.setSource(12795U);
    msg.setSourceEntity(80U);
    msg.setDestination(24157U);
    msg.setDestinationEntity(167U);
    msg.result.assign("AOAAWDTTPLERIVDMOQXIRSBGGNSXGVRVQGTJLSCGHSTQSONGUZYPIKTHVBFHMCBRYHGNXANTPUZRFYYIDHZDEGBPANVFROQNPRHODXUOQFJQHEZCBUFUHLCADWNOETIJKP");
    msg.source_entity.assign("NBRXZHTXNBFIMGDICNBYJDTIUUAAMZIHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParserOutput #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParserOutput msg;
    msg.setTimeStamp(0.149699987245);
    msg.setSource(51849U);
    msg.setSourceEntity(131U);
    msg.setDestination(10556U);
    msg.setDestinationEntity(4U);
    msg.result.assign("WTSNXZMCUTFYFBHOSXYFWRUJENBEKMLRLASNMQDOXYHSWPTWBQFYDMJGBPNMTOJFGGAYOCJMCZIXWFQNUCWWJJBIKAWXHCMPUYYIAZFVANUBRLQUICXEULZSCDCURDLUZCDIQTJXRGVPRNZGLGPTEKUOKLHNSLHBPVRSEHBDET");
    msg.source_entity.assign("DUEFUUUEDNMYMZJOJVGSBOXOTIZQVGGNIKTEDBXLCUVJNIQRAZRFKGSMPNMHGWWWEOJSUZBLPWIYSMKYNOJXDGCEIYYARBAGQZOVHWXUNYTYLSJDXRXAHMARWXQYUAMBFBOSBTQDNLVCDSIRSGROGSKVKHCXSCIFRTTZZCFZFWLUEVVHWZJFPWAVPJNUBOJXLLHMYDFHMQTMPKTADBIEXLIQPRCBKHCEKWHPRPOCTKQLPNJLCYAGEVPZFIED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParserOutput #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParserOutput msg;
    msg.setTimeStamp(0.989861920799);
    msg.setSource(22078U);
    msg.setSourceEntity(34U);
    msg.setDestination(57144U);
    msg.setDestinationEntity(56U);
    msg.result.assign("MHKPLHLRHCOUPCCGXYUXFGISILUZDAKFHAAJFOLVKOHHUNAFLHXRVCDKYVPZCUMSNUVJSIAPOIEBQZDQYTWMICIWKBQWAEBGYGQIYKJACPBGZOSROHBMVOXMUTRRJPNZQAIZNLJTQEHYZWGFCVDTJWJIDQETUMYMETVKSBSJKRKFFRPKNRNYZBGGUDFZSMPWQHEV");
    msg.source_entity.assign("MTSYASDGCPFTBIDHZOJDZOYBFKNZTVIVECEHUOKLJSXLYUCEBNYYAUAUPUGMBDZKJAIKEZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParserOutput #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}

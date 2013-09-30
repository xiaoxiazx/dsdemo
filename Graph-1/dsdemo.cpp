//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USEFORM("DSDemo_graph\graph_alg_u.cpp", GraphAlgorithmForm);
USEFORM("DSDemo_graph\graph_intro_u.cpp", graph_intro_frm);
USEFORM("MainForm.cpp", dsdemo_MainForm);
USEFORM("DSDemo_sort\ThSort.cpp", ThreadSortForm);
USEFORM("DSDemo_search\search_string.cpp", search_stringForm);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(Tdsdemo_MainForm), &dsdemo_MainForm);
         Application->CreateForm(__classid(Tgraph_intro_frm), &graph_intro_frm);
         Application->CreateForm(__classid(TGraphAlgorithmForm), &GraphAlgorithmForm);
         Application->CreateForm(__classid(TThreadSortForm), &ThreadSortForm);
         Application->CreateForm(__classid(Tsearch_stringForm), &search_stringForm);
         Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------

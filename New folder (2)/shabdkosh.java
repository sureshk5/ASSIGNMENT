package logics;
import java.util.*;

public class StringChain {
    public static void main(String []args)
    {
        String []data={"shashi","shankar","rock","kiran","tail"};
        int index=0;
        int length1=data.length;
        ArrayList<String>list=new ArrayList<String>();
        String []res=new String[20];
        for(int i=0;i<length1;i++)
        {
            int endlength=data[i].length()-1;
       
            char end=data[i].charAt(endlength);
       
            for(int j=i+1;j<length1;j++)
            {
   
                char start=data[j].charAt(0);

           
                if(end==start)
                {
                   
                    res[index++]=data[i];
                   
                    res[index++]=data[j];

                }
               
            }
           
        }
        for(String str:res)
        {
            if(list.contains(str))
            {
            }
            else
            {
                list.add(str);
            }
        }
        Iterator<String> ite=list.iterator();
        while(ite.hasNext())
        {
            System.out.print(ite.next()+"-->");
        }
    }

}

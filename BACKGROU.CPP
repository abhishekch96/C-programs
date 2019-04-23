setcolor(1);
    for(int j=0;j<getmaxy();j+=20)
    {


    for(int i=10;i<getmaxx();i+=20)
     arc(i,j,180,0,10);



     for(int k=0;k<getmaxx();k+=20)
      arc(k,j+10,180,0,10);

    }
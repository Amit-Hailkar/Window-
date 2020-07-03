// Headers
#include<windows.h>
#include<stdio.h> //For file oprations

//Winmain()
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	//Variable Declarations
	TCHAR str[255];
	int iReturnValueX, iReturnValueY;
	FILE *pFile = NULL;

	//Code
	if (fopen_s(&pFile, "DisplayResolutionInformation.txt", "w") !=0)
	{
		MessageBox(NULL, TEXT("ERROR - Cannot Create Desired File"),TEXT("ERROR"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
		exit(0);
	}

	iReturnValueX = GetSystemMetrics(SM_CXSCREEN); //For Width
	iReturnValueY = GetSystemMetrics(SM_CYSCREEN); //For Height

	
	//Following If else checks for diffrent ypes of resoltuions as per predefined standards and Displays the Resolution with Type. 

	if ((iReturnValueX == 800) && (iReturnValueY == 600)) 
	{
		wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - SVGA"),iReturnValueX,iReturnValueY);
		MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
		fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
	}
	else 
		if ((iReturnValueX == 1024) && (iReturnValueY == 768))
			{
				wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - XGA"),iReturnValueX,iReturnValueY);
				MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
				fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
			} 
		else
			if ((iReturnValueX == 1280) && (iReturnValueY == 720) || (iReturnValueX == 1280) && (iReturnValueY == 800))
			{
				wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - WXGA"),iReturnValueX,iReturnValueY);
				MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
				fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
			}
			else 
				if ((iReturnValueX == 1280) && (iReturnValueY == 1024))
				{
					wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - SXGA"),iReturnValueX,iReturnValueY);
					MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
					fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
				} 
				else
					if ((iReturnValueX == 1360) && (iReturnValueY = 768) || (iReturnValueX == 1366) && (iReturnValueY == 768))
					{
						wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - HD"),iReturnValueX,iReturnValueY);
						MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
						fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
					}
					else
						if ((iReturnValueX == 1440) && (iReturnValueY == 900))
						{
							wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - WXGA+"),iReturnValueX,iReturnValueY);
							MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
							fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
						}
						else
							if ((iReturnValueX == 1600) && (iReturnValueY == 900))
							{
								wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - HD+"),iReturnValueX,iReturnValueY);
								MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
								fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
							}
							else
								if ((iReturnValueX == 1920) && (iReturnValueY == 1080))
								{
									wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - FHD"),iReturnValueX,iReturnValueY);
									MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
									fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
								}
								else
									if ((iReturnValueX == 2560) && (iReturnValueY == 1440))
									{
										wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - QHD"),iReturnValueX,iReturnValueY);
										MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
										fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
									}
									else
										if ((iReturnValueX == 3440) && (iReturnValueY == 1440))
										{
											wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - WQHD"),iReturnValueX,iReturnValueY);
											MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
											fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
										}
										else
											if((iReturnValueX == 3840) && (iReturnValueY == 1080))
												{
													wsprintf(str, TEXT("Width = %d\nHeight = %d\n\n ASTROMEDICOMP MAIN MONITOR \n\nType - 2 Full HD Side By Side\n1Vertical Half 4K UHD\n\nAspect Raio 32:9\nClose to IMAX Ultra Wide Screen"),iReturnValueX,iReturnValueY);
													MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
													fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
												}
											else 
												if ((iReturnValueX == 3840) && (iReturnValueY == 2160))
												{
													wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - 4K UHD"),iReturnValueX,iReturnValueY);
													MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
													fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
												}
												else
													if ((iReturnValueX == 4800) && (iReturnValueY == 2700))
													{
														wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - 5K HD"),iReturnValueX,iReturnValueY);
														MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
														fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
													}
													else
														if ((iReturnValueX == 5760) && (iReturnValueY == 3240))
														{
															wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - 6K HD"),iReturnValueX,iReturnValueY);
															MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
															fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
														}
														else
															if ((iReturnValueX == 6720) && (iReturnValueY == 3780))
															{
																wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - 7K HD"),iReturnValueX,iReturnValueY);
																MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
																fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
															}
															else
																if ((iReturnValueX == 7680) && (iReturnValueY == 4320))
																{
																	wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - 8K HD"),iReturnValueX,iReturnValueY);
																	MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
																	fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
																}
																else
																	{
																		wsprintf(str, TEXT("Width = %d\nHeight = %d\n\nType - Could not be determined"),iReturnValueX,iReturnValueY);
																		MessageBox(NULL, str, TEXT("Resolution of Screen(In Pixels)"), MB_OKCANCEL |MB_RIGHT | MB_ICONINFORMATION | MB_TOPMOST);
																		fprintf(pFile,"Current Display Resolution in Pixels is : %d by %d\n",iReturnValueX, iReturnValueY);
																	}
	fclose(pFile);
	pFile = NULL;
}

													
															



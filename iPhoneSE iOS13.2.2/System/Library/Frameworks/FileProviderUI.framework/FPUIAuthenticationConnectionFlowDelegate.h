/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPUIAuthenticationConnectionFlowDelegate <NSObject>
@required
-(void)authenticationDelegate:(id)arg1 didEncounterError:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didReceiveCredentialDescriptors:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didReceiveVolumeMountRepresentations:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didFinishWithError:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


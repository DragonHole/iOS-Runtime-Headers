/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
-(id)requestSpecifiers;
-(void)confirmRespondToRequest:(id)arg1 ;
-(id)_createSpecifierForAskForMore:(id)arg1 ;
-(void)respondToRequest:(id)arg1 withApproval:(BOOL)arg2 timeApproved:(id)arg3 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
@end


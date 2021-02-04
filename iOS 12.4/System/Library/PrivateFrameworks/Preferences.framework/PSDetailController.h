/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>

@class PSEditingPane;

@interface PSDetailController : PSViewController {

	PSEditingPane* _pane;

}

@property (assign,nonatomic,__weak) PSEditingPane * pane; 
-(CGRect)paneFrame;
-(void)loadPane;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)saveChanges;
-(void)setPane:(PSEditingPane *)arg1 ;
-(PSEditingPane *)pane;
-(void)dealloc;
-(id)title;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)viewDidUnload;
-(void)suspend;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class _UIAccessDeniedView;

@interface PLUIPrivacyViewController : UIViewController {

	BOOL _showingAccessDeniedView;
	_UIAccessDeniedView* _accessDeniedView;

}
-(void)dealloc;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)_showCancelButton;
-(void)_updateAccessDeniedView;
-(void)_cancelButtonClicked:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSError, UIAlertView, NSString;

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {

	/*^block*/id _completionHandler;
	NSError* _error;
	UIAlertView* _alert;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_presentAlertWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)_forceFinishNow;
@end


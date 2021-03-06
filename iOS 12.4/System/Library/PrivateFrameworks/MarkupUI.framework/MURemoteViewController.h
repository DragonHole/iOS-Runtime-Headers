/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MURemoteViewProtocol.h>

@class NSString;

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol> {

	BOOL _shouldResignFirstResponder;
	/*^block*/id _finishedWithResultsCompletionBlock;
	long long _sandboxExtensionHandle;

}

@property (assign) long long sandboxExtensionHandle;                           //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (assign) BOOL shouldResignFirstResponder;                            //@synthesize shouldResignFirstResponder=_shouldResignFirstResponder - In the implementation block
@property (nonatomic,copy) id finishedWithResultsCompletionBlock;              //@synthesize finishedWithResultsCompletionBlock=_finishedWithResultsCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2 ;
-(void)setShouldResignFirstResponder:(BOOL)arg1 ;
-(BOOL)shouldResignFirstResponder;
-(id)finishedWithResultsCompletionBlock;
-(void)setFinishedWithResultsCompletionBlock:(id)arg1 ;
-(void)beginDismissWithInfo:(id)arg1 ;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(long long)sandboxExtensionHandle;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
@end


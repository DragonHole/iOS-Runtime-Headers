/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol MTAgentDiagnosticDelegate;
@class NSString;

@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener> {

	id<MTAgentDiagnosticDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTAgentDiagnosticDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleNotification:(id)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ;
-(void)_addStateHandler;
-(void)setDelegate:(id<MTAgentDiagnosticDelegate>)arg1 ;
-(id<MTAgentDiagnosticDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

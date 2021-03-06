/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface _DKCallMonitor : _DKMonitor <CXCallObserverDelegate> {

	BOOL _enabled;
	BOOL _callInProgress;
	CXCallObserver* _observer;

}

@property (assign,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL callInProgress;                    //@synthesize callInProgress=_callInProgress - In the implementation block
@property (nonatomic,retain) CXCallObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(id)entitlements;
+(void)setCallInProgress:(BOOL)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(id)loadState;
-(void)saveState;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)setCallInProgress:(BOOL)arg1 ;
-(BOOL)anyCallInProgressOnCurrentDevice:(id)arg1 ;
-(BOOL)callInProgress;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
-(void)setObserver:(CXCallObserver *)arg1 ;
-(CXCallObserver *)observer;
-(void)start;
-(void)deactivate;
-(BOOL)enabled;
@end


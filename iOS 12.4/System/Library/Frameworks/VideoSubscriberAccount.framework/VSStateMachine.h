/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSStateMachineDelegate;
@class NSString, VSOptional, NSOperationQueue, NSMutableArray, NSMutableDictionary;

@interface VSStateMachine : NSObject {

	int _mode;
	NSString* _name;
	VSOptional* _currentState;
	id<VSStateMachineDelegate> _delegate;
	NSOperationQueue* _transitionQueue;
	NSMutableArray* _enqueuedTransitions;
	NSMutableDictionary* _transitionTable;
	NSMutableDictionary* _ignoredEventsByState;

}

@property (nonatomic,retain) NSOperationQueue * transitionQueue;                      //@synthesize transitionQueue=_transitionQueue - In the implementation block
@property (nonatomic,retain) VSOptional * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) NSMutableArray * enqueuedTransitions;                    //@synthesize enqueuedTransitions=_enqueuedTransitions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transitionTable;                   //@synthesize transitionTable=_transitionTable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ignoredEventsByState;              //@synthesize ignoredEventsByState=_ignoredEventsByState - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<VSStateMachineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSOperationQueue *)transitionQueue;
-(void)_exitingState:(id)arg1 ;
-(void)_enteringState:(id)arg1 ;
-(NSMutableDictionary *)ignoredEventsByState;
-(NSMutableDictionary *)transitionTable;
-(void)_setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3 ignoringEvent:(BOOL)arg4 ;
-(void)_handleEnqueuedTransitions;
-(void)setTransitionQueue:(NSOperationQueue *)arg1 ;
-(void)setTransitionTable:(NSMutableDictionary *)arg1 ;
-(void)setIgnoredEventsByState:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)enqueuedTransitions;
-(void)setEnqueuedTransitions:(NSMutableArray *)arg1 ;
-(void)setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3 ;
-(void)ignoreEvent:(id)arg1 inState:(id)arg2 ;
-(void)activateWithState:(id)arg1 ;
-(void)enqueueEvent:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setDelegate:(id<VSStateMachineDelegate>)arg1 ;
-(id<VSStateMachineDelegate>)delegate;
-(VSOptional *)currentState;
-(void)setCurrentState:(VSOptional *)arg1 ;
@end

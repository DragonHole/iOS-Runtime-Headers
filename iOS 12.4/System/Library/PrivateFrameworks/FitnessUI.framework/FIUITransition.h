/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FIUIState;

@interface FIUITransition : NSObject {

	NSString* _label;
	FIUIState* _toState;
	long long _event;
	/*^block*/id _handler;
	/*^block*/id _gate;

}

@property (nonatomic,retain) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) FIUIState * toState;              //@synthesize toState=_toState - In the implementation block
@property (assign,nonatomic) long long event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id gate;                                   //@synthesize gate=_gate - In the implementation block
-(id)gate;
-(void)setGate:(id)arg1 ;
-(FIUIState *)toState;
-(void)setToState:(FIUIState *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

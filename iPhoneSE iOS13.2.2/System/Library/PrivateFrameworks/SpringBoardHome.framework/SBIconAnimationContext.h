/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBIconAnimationContext : NSObject {

	double _delay;
	double _fraction;
	/*^block*/id _completion;

}

@property (assign,nonatomic) double delay;                 //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double fraction;              //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,copy) id completion;                  //@synthesize completion=_completion - In the implementation block
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(double)fraction;
-(void)setFraction:(double)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MNDurationRequest : NSObject {

	NSMutableArray* completions;
	double startTime;

}

@property (nonatomic,retain) NSMutableArray * completions; 
@property (assign,nonatomic) double startTime; 
-(id)init;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSWPTab : NSObject <NSCopying> {

	double _position;
	int _alignment;
	NSString* _leader;

}

@property (assign,nonatomic) double position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) int alignment;                //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSString * leader;              //@synthesize leader=_leader - In the implementation block
+(void)initialize;
+(id)tab;
+(id)kTabStopAlignmentStringLeft;
+(id)kTabStopAlignmentStringCenter;
+(id)kTabStopAlignmentStringRight;
+(id)kTabStopAlignmentStringDecimal;
+(id)kTabStopDisplayStringNone;
+(id)kTabStopDisplayStringPoint;
+(id)kTabStopDisplayStringDash;
+(id)kTabStopDisplayStringUnderscore;
+(id)kTabStopDisplayStringArrow;
+(id)kTabStopLeaderStringPoint;
+(id)kTabStopLeaderStringDash;
+(id)kTabStopLeaderStringUnderscore;
+(id)kTabStopLeaderStringArrow;
+(id)kTabStopLeaderStringArrowRTL;
+(id)tabLeaderFromDisplayString:(id)arg1 ;
+(int)tabAlignmentFromString:(id)arg1 isRTL:(BOOL)arg2 ;
+(id)stringFromTabAlignment:(int)arg1 isRTL:(BOOL)arg2 ;
+(id)displayStringFromTabLeader:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(double)position;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(void)setPosition:(double)arg1 ;
-(id)initWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3 ;
-(long long)compareToPosition:(double)arg1 ;
-(NSString *)leader;
-(double)positionInInches;
-(void)setPositionInInches:(double)arg1 ;
-(BOOL)isEqualToPosition:(double)arg1 ;
-(void)setLeader:(NSString *)arg1 ;
@end

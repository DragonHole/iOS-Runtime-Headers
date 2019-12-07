/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNNavigationTraceInfo : NSObject {

	NSString* _pedestrianTracePath;
	double _pedestrianTraceStartRelativeTimestamp;

}

@property (nonatomic,copy) NSString * pedestrianTracePath;                              //@synthesize pedestrianTracePath=_pedestrianTracePath - In the implementation block
@property (assign,nonatomic) double pedestrianTraceStartRelativeTimestamp;              //@synthesize pedestrianTraceStartRelativeTimestamp=_pedestrianTraceStartRelativeTimestamp - In the implementation block
-(void)setPedestrianTracePath:(NSString *)arg1 ;
-(void)setPedestrianTraceStartRelativeTimestamp:(double)arg1 ;
-(NSString *)pedestrianTracePath;
-(double)pedestrianTraceStartRelativeTimestamp;
@end

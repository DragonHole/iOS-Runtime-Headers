/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSString;

@interface FCRLandmark : NSObject {

	NSString* type;
	unsigned long long pointCount;
	CGPoint* points;

}

@property (readonly) NSString * type; 
@property (readonly) unsigned long long pointCount; 
@property (readonly) CGPoint* points; 
+(id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(CGPoint*)arg3 ;
-(void)dealloc;
-(NSString *)type;
-(unsigned long long)pointCount;
-(CGPoint*)points;
-(id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(CGPoint*)arg3 ;
@end


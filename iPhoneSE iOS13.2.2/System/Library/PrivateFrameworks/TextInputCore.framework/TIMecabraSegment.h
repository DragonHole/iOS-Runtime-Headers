/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TIMecabraSegment : NSObject {

	NSString* _reading;
	NSString* _surface;

}

@property (nonatomic,retain) NSString * reading;              //@synthesize reading=_reading - In the implementation block
@property (nonatomic,retain) NSString * surface;              //@synthesize surface=_surface - In the implementation block
+(void)splitSegmests:(id)arg1 at:(int)arg2 forPrefix:(id*)arg3 forSuffix:(id*)arg4 ;
-(NSString *)surface;
-(void)setReading:(NSString *)arg1 ;
-(NSString *)reading;
-(void)setSurface:(NSString *)arg1 ;
@end

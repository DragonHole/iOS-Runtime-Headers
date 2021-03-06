/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@class NSNumber;

@interface WFLSMMap : NSObject {

	LSMMapRef map;
	NSNumber* threshold;

}

@property (copy) NSNumber * threshold; 
+(id)mapFromFilePath:(id)arg1 ;
+(id)mapWithMap:(LSMMapRef)arg1 ;
+(id)mapFromURL:(id)arg1 ;
-(void)_setMap:(LSMMapRef)arg1 ;
-(id)initWithMap:(LSMMapRef)arg1 ;
-(void)setThreshold:(NSNumber *)arg1 ;
-(LSMMapRef)_map;
-(NSNumber *)threshold;
-(id)evaluate:(id)arg1 ;
-(id)wordDump:(id)arg1 ;
-(id)initWithMapFromURL:(id)arg1 ;
-(id)initWithMapFromFilePath:(id)arg1 ;
-(LSMTextRef)_createLSMTextFromString:(id)arg1 ;
-(void)dealloc;
-(long long)numberOfCategories;
@end


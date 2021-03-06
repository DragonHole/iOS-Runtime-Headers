/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface WFImgArrayCache : NSObject {

	NSMutableString* imageAlternativeDescriptions;
	long long numberOfUnknownSizedImages;
	long long numberOfKnownImagePixels;

}
+(id)imgArrayCacheWithArray:(id)arg1 ;
-(void)dealloc;
-(id)initWithArray:(id)arg1 ;
-(long long)numberOfKnownImagePixels;
-(id)imageAlternativeDescriptions;
-(long long)numberOfUnknownSizedImages;
@end


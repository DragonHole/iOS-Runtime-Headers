/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPFontCacheValue : NSObject {

	CTFontRef _ctFont;

}

@property (nonatomic,readonly) CTFontRef ctFont;              //@synthesize ctFont=_ctFont - In the implementation block
+(id)cacheValueWithCTFont:(CTFontRef)arg1 ;
-(CTFontRef)ctFont;
-(id)initWithCTFont:(CTFontRef)arg1 ;
-(void)dealloc;
@end


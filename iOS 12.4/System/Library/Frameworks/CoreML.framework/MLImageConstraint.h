/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLImageSizeConstraint;

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying> {

	long long _pixelsHigh;
	long long _pixelsWide;
	MLImageSizeConstraint* _sizeConstraint;
	unsigned long long _pixelType;

}

@property (readonly) unsigned long long imageHeight; 
@property (readonly) unsigned long long imageWidth; 
@property (readonly) unsigned long long pixelType;                                  //@synthesize pixelType=_pixelType - In the implementation block
@property (readonly) unsigned osType; 
@property (nonatomic,readonly) long long pixelsHigh;                                //@synthesize pixelsHigh=_pixelsHigh - In the implementation block
@property (nonatomic,readonly) long long pixelsWide;                                //@synthesize pixelsWide=_pixelsWide - In the implementation block
@property (nonatomic,readonly) unsigned pixelFormatType; 
@property (nonatomic,readonly) MLImageSizeConstraint * sizeConstraint;              //@synthesize sizeConstraint=_sizeConstraint - In the implementation block
+(id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4 ;
+(BOOL)osType:(unsigned)arg1 isAcceptedForPixelType:(unsigned long long)arg2 ;
+(id)_stringForOSType:(unsigned)arg1 ;
+(id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 ;
+(unsigned long long)imagePixelTypeFromOSType:(unsigned)arg1 ;
-(unsigned)pixelFormatType;
-(unsigned long long)imageWidth;
-(unsigned long long)imageHeight;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4 ;
-(id)_stringForAllowedOSTypes;
-(long long)pixelsWide;
-(long long)pixelsHigh;
-(MLImageSizeConstraint *)sizeConstraint;
-(unsigned long long)pixelType;
-(unsigned)osType;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


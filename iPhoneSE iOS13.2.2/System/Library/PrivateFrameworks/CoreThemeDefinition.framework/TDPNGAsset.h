/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPNGAsset : TDAsset {

	int _exifOrientation;
	unsigned _fileScaleFactor;

}

@property (nonatomic,retain) NSSet * renditions; 
@property (assign,nonatomic) BOOL rawData; 
-(int)exifOrientation;
-(void)_logError:(id)arg1 ;
-(unsigned)fileScaleFactor;
-(CGSize)sourceImageSizeWithDocument:(id)arg1 ;
-(id)sourceImageWithDocument:(id)arg1 ;
-(void)setFileScaleFactor:(unsigned)arg1 ;
-(BOOL)hasCursorProduction;
-(BOOL)hasProduction;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSData;

@interface MKTileOverlayTile : NSObject {

	SCD_Struct_MK42 _path;
	SCD_Struct_MK6 _frame;
	double _scale;
	NSData* _image;

}

@property (assign,nonatomic) SCD_Struct_MK42 path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK6 frame;              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * image;                    //@synthesize image=_image - In the implementation block
-(id)description;
-(SCD_Struct_MK42)path;
-(void)setPath:(SCD_Struct_MK42)arg1 ;
-(double)scale;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(SCD_Struct_MK6)frame;
-(void)setScale:(double)arg1 ;
-(void)setFrame:(SCD_Struct_MK6)arg1 ;
@end


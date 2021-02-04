/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPTOPhoto, UIImage, NSString, NSDate;

@interface NTKAlbumAtom : NSObject {

	NPTOPhoto* _photo;
	UIImage* _image;
	NSString* _identifier;
	unsigned long long _index;
	NSDate* _date;

}

@property (nonatomic,readonly) NPTOPhoto * photo;                       //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
-(NPTOPhoto *)photo;
-(id)initWithPhoto:(id)arg1 ;
-(NSString *)identifier;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSDate *)date;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end

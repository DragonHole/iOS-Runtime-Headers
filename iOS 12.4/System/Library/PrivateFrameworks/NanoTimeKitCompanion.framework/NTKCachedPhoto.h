/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NTKPhoto;

@interface NTKCachedPhoto : NSObject {

	UIImage* _image;
	NTKPhoto* _photo;
	long long _index;

}

@property (nonatomic,readonly) UIImage * image;               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NTKPhoto * photo;              //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) long long index;               //@synthesize index=_index - In the implementation block
-(NTKPhoto *)photo;
-(id)initWithPhoto:(id)arg1 ;
-(id)initWithPhoto:(id)arg1 index:(long long)arg2 ;
-(BOOL)load;
-(UIImage *)image;
-(long long)index;
@end

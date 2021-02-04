/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VUIContentRatingImageManager : NSObject {

	NSDictionary* _imageRecords;

}

@property (nonatomic,retain) NSDictionary * imageRecords;              //@synthesize imageRecords=_imageRecords - In the implementation block
+(id)sharedInstance;
+(id)_imageForUnknownRatingLabel:(id)arg1 ;
+(id)_imageRecordLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 ;
+(void)_addImageRecordToDictionary:(id)arg1 ratingSystem:(long long)arg2 ratingLabel:(id)arg3 resourceName:(id)arg4 isTemplatedImage:(BOOL)arg5 ;
+(id)_cleanedRatingLabel:(id)arg1 ;
-(id)records;
-(id)imageForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 ;
-(id)_imageRecordForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 ;
-(id)_imageRecordForContentRating:(id)arg1 ;
-(id)imageForContentRating:(id)arg1 ;
-(BOOL)isTemplatedImageForContentRating:(id)arg1 ;
-(NSDictionary *)imageRecords;
-(void)setImageRecords:(NSDictionary *)arg1 ;
@end

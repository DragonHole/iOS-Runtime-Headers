/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHValidator.h>

@class PLPhotoLibrary;

@interface _PHPhotoLibraryValidator : PHValidator {

	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,__weak,readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(BOOL)isValidImagePathExtension:(id)arg1 ;
-(BOOL)isValidVideoPathExtension:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
@end


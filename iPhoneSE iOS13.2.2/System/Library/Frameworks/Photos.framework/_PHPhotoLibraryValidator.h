/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHValidator.h>

@class PLPhotoLibrary;

@interface _PHPhotoLibraryValidator : PHValidator {

	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,__weak,readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(BOOL)isValidImagePathExtension:(id)arg1 ;
-(BOOL)isValidVideoPathExtension:(id)arg1 ;
@end


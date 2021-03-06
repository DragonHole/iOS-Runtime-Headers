/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class PLPhotoLibrary, NSString;

@interface PLManagedObject : NSManagedObject

@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) BOOL isRegisteredWithUserInterfaceContext; 
@property (nonatomic,copy,readonly) NSString * shortObjectIDURI; 
-(BOOL)supportsCloudUpload;
-(NSString *)shortObjectIDURI;
-(void)willSave;
-(BOOL)isRegisteredWithUserInterfaceContext;
-(BOOL)isSyncableChange;
-(PLPhotoLibrary *)photoLibrary;
@end


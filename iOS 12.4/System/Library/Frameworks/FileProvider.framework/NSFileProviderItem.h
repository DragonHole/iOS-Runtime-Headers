/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber, NSDate, NSData, NSError, NSPersonNameComponents, NSDictionary;


@protocol NSFileProviderItem <NSObject>
@property (nonatomic,copy,readonly) NSString * itemIdentifier; 
@property (nonatomic,copy,readonly) NSString * parentItemIdentifier; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,copy,readonly) NSNumber * documentSize; 
@property (nonatomic,copy,readonly) NSNumber * childItemCount; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * contentModificationDate; 
@property (nonatomic,copy,readonly) NSDate * lastUsedDate; 
@property (nonatomic,copy,readonly) NSData * tagData; 
@property (nonatomic,copy,readonly) NSNumber * favoriteRank; 
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed; 
@property (getter=isUploaded,nonatomic,readonly) BOOL uploaded; 
@property (getter=isUploading,nonatomic,readonly) BOOL uploading; 
@property (nonatomic,copy,readonly) NSError * uploadingError; 
@property (getter=isDownloaded,nonatomic,readonly) BOOL downloaded; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (nonatomic,copy,readonly) NSError * downloadingError; 
@property (getter=isMostRecentVersionDownloaded,nonatomic,readonly) BOOL mostRecentVersionDownloaded; 
@property (getter=isShared,nonatomic,readonly) BOOL shared; 
@property (getter=isSharedByCurrentUser,nonatomic,readonly) BOOL sharedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * ownerNameComponents; 
@property (nonatomic,readonly) NSPersonNameComponents * mostRecentEditorNameComponents; 
@property (nonatomic,readonly) NSData * versionIdentifier; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@optional
-(BOOL)isDownloaded;
-(BOOL)isUploading;
-(NSData *)tagData;
-(NSError *)uploadingError;
-(NSError *)downloadingError;
-(BOOL)isMostRecentVersionDownloaded;
-(BOOL)isSharedByCurrentUser;
-(NSPersonNameComponents *)ownerNameComponents;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
-(BOOL)isUploaded;
-(BOOL)isShared;
-(NSDate *)lastUsedDate;
-(NSDate *)creationDate;
-(NSData *)versionIdentifier;
-(BOOL)isTrashed;
-(BOOL)isDownloading;
-(NSDate *)contentModificationDate;
-(NSNumber *)documentSize;
-(NSNumber *)favoriteRank;
-(NSNumber *)childItemCount;
-(unsigned long long)capabilities;
-(NSDictionary *)userInfo;

@required
-(NSString *)parentItemIdentifier;
-(NSString *)itemIdentifier;
-(NSString *)typeIdentifier;
-(NSString *)filename;

@end


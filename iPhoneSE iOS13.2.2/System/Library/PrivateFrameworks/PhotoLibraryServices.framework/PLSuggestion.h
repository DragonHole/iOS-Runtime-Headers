/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSString, NSDate, NSData, NSSet;

@interface PLSuggestion : PLManagedObject <PLCloudDeletable>

@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) short type; 
@property (assign,nonatomic) short subtype; 
@property (assign,nonatomic) short state; 
@property (assign,nonatomic) short version; 
@property (assign,nonatomic) short notificationState; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * activationDate; 
@property (nonatomic,retain) NSDate * relevantUntilDate; 
@property (nonatomic,retain) NSDate * expungeDate; 
@property (nonatomic,retain) NSData * actionData; 
@property (nonatomic,retain) NSData * featuresData; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSSet * keyAssets; 
@property (nonatomic,retain) NSSet * representativeAssets; 
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)predicateForAllAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 ;
+(id)suggestionWithUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)suggestionsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)_representativeAssetIDsInSuggestion:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(BOOL)arg2 ;
+(BOOL)_shouldPrefetchSuggestionKeyAssetsInManagedObjectContext:(id)arg1 ;
+(id)suggestionsToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2 ;
+(id)suggestionsToPrefetchInManagedObjectContext:(id)arg1 ;
+(id)_suggestionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4 ;
+(unsigned long long)deletePendingSuggestionsCreatedBefore:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(unsigned long long)deleteAllMomentShareSuggestionsInManagedObjectContext:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isPending;
-(void)delete;
-(void)prepareForDeletion;
-(void)willSave;
-(long long)cloudDeletionType;
-(NSString *)cloudUUIDForDeletion;
-(BOOL)supportsCloudUpload;
-(BOOL)isSyncableChange;
-(id)mutableKeyAssets;
-(id)mutableRepresentativeAssets;
-(void)updateStartAndEndDate;
-(void)updateCachedCounts:(id)arg1 ;
-(void)replaceKeyAsset:(id)arg1 ;
-(void)removeRepresentativeAsset:(id)arg1 ;
-(id)momentShare;
-(id)cplFullRecord;
-(void)updateWithCPLSuggestionChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)cplSuggestionChange;
@end


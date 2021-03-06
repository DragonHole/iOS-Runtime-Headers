/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICNoteContainer.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSString, NSDate, NSSet, ICAccount;

@interface ICFolder : ICNoteContainer <ICCloudObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSDate * dateForLastTitleModification; 
@property (nonatomic,retain) NSSet * notes; 
@property (nonatomic,retain) ICFolder * parent; 
@property (nonatomic,retain) NSSet * children; 
@property (nonatomic,retain) NSDate * parentModificationDate; 
@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,readonly) BOOL isDefaultFolderForAccount; 
@property (assign,nonatomic) BOOL importedFromLegacy; 
@property (assign,nonatomic) short folderType; 
+(id)shareType;
+(id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(BOOL)arg1 ;
+(id)allFoldersInContext:(id)arg1 ;
+(void)purgeFolder:(id)arg1 ;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)keyPathsForValuesAffectingParentCloudObject;
+(id)englishTitleForDefaultFolder;
+(id)englishTitleForTrashFolder;
+(id)localizedNewFolderName;
+(id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 ofAccount:(id)arg3 ;
+(id)reservedFolderTitles;
+(id)localizedTitleForDefaultFolder;
+(id)localizedTitleForTrashFolder;
+(id)stringByScrubbingStringForFolderName:(id)arg1 ;
+(id)keyPathsForValuesAffectingIsLeaf;
+(id)keyPathsForValuesAffectingIsRecentlyDeletedFolder;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)keyPathsForValuesAffectingIsDefaultFolderForAccount;
+(id)keyPathsForValuesAffectingTitleForTableViewCell;
+(id)newFolderWithIdentifier:(id)arg1 context:(id)arg2 ;
+(void)deleteFolder:(id)arg1 ;
+(id)foldersMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)folderWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)predicateForVisibleFolders;
+(id)newFolderInContext:(id)arg1 ;
+(id)folderWithIdentifierCreatingIfNecessary:(id)arg1 context:(id)arg2 ;
+(id)visibleFoldersInContext:(id)arg1 ;
+(unsigned long long)countOfFoldersMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2 ;
+(id)newCloudObjectForRecord:(id)arg1 context:(id)arg2 ;
-(id)parentFolder;
-(void)awakeFromFetch;
-(BOOL)isDeletable;
-(id)shareType;
-(BOOL)isRecentlyDeletedFolder;
-(id)recordZoneName;
-(id)recordType;
-(id)ic_loggingValues;
-(void)deleteFromLocalDatabase;
-(id)predicateForVisibleNotes;
-(id)predicateForPinnedNotes;
-(id)titleForNavigationBar;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)supportsEditingNotes;
-(BOOL)canBeSharedViaICloud;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)isLeaf;
-(id)visibleNoteContainerChildren;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(id)parentCloudObject;
-(id)childCloudObjects;
-(BOOL)canBeRootShareObject;
-(id)shareTitle;
-(BOOL)isDefaultFolderForAccount;
-(void)regenerateNestedTitleForSorting;
-(void)updateSortOrder;
-(BOOL)isDefaultFolderOrDescendantOfDefaultFolder;
-(BOOL)isAncestorOfFolder:(id)arg1 ;
-(id)visibleNotesIncludingChildFolders;
-(id)visibleNotesInFolder;
-(unsigned long long)countOfVisibleNotesInFolder;
-(id)predicateForVisibleNotesInFolder;
-(id)predicateForPinnedNotesInFolder;
-(id)predicateForVisibleAttachmentsInFolder;
-(id)predicateForVisibleAttachments;
-(BOOL)isMovable;
-(BOOL)validateTitle:(inout id*)arg1 error:(out id*)arg2 ;
-(BOOL)isTitleValid:(id)arg1 error:(out id*)arg2 ;
-(BOOL)visibleChildFoldersContainsFolderWithTitle:(id)arg1 ;
-(id)predicateForFoldersInFolder;
-(id)predicateForNotesInFolder;
-(id)predicateForAttachmentsInFolder;
-(id)pinnedNotesInFolder;
-(id)foldersInFolder;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 ;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)hasAllMandatoryFields;
-(id)newlyCreatedRecord;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)resetUniqueIdentifier;
-(void)unmarkForDeletionIncludingParentHierarchy;
-(void)mergeParentFromRecord:(id)arg1 ;
-(void)setParent:(ICFolder *)arg1 ;
-(void)setAccount:(ICAccount *)arg1 ;
-(id)accountName;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 ;
-(void)setNeedsInitialFetchFromCloud:(BOOL)arg1 ;
-(void)markForDeletion;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(void)setTitle:(NSString *)arg1 ;
-(id)localizedTitle;
-(long long)compare:(id)arg1 ;
-(BOOL)isEditable;
@end


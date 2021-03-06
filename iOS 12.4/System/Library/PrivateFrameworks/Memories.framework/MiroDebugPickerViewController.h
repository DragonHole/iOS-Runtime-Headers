/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol MiroPlayerControlling, NSCopying;
@class NSObject, NSString, NSDictionary, NSArray;

@interface MiroDebugPickerViewController : UITableViewController {

	id<MiroPlayerControlling> _playerController;
	NSObject*<NSCopying> _originalEntryID;
	NSString* _moodID;
	/*^block*/id _replaceMoodPartForEntryIDBlock;
	NSDictionary* _entryIDsByMood;
	NSDictionary* _displayNamesByEntryID;
	long long _selectedSection;
	long long _selectedRow;
	NSArray* _sortedMoodIDs;

}

@property (assign,nonatomic) long long selectedSection;                                      //@synthesize selectedSection=_selectedSection - In the implementation block
@property (assign,nonatomic) long long selectedRow;                                          //@synthesize selectedRow=_selectedRow - In the implementation block
@property (nonatomic,retain) NSArray * sortedMoodIDs;                                        //@synthesize sortedMoodIDs=_sortedMoodIDs - In the implementation block
@property (assign,nonatomic,__weak) id<MiroPlayerControlling> playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,copy) NSObject*<NSCopying> originalEntryID;                             //@synthesize originalEntryID=_originalEntryID - In the implementation block
@property (nonatomic,copy) NSString * moodID;                                                //@synthesize moodID=_moodID - In the implementation block
@property (nonatomic,copy) id replaceMoodPartForEntryIDBlock;                                //@synthesize replaceMoodPartForEntryIDBlock=_replaceMoodPartForEntryIDBlock - In the implementation block
@property (nonatomic,retain) NSDictionary * entryIDsByMood;                                  //@synthesize entryIDsByMood=_entryIDsByMood - In the implementation block
@property (nonatomic,retain) NSDictionary * displayNamesByEntryID;                           //@synthesize displayNamesByEntryID=_displayNamesByEntryID - In the implementation block
-(id<MiroPlayerControlling>)playerController;
-(void)setPlayerController:(id<MiroPlayerControlling>)arg1 ;
-(void)_addObserverForTextSizeDidChange;
-(void)_removeObserverForTextSizeDidChange;
-(void)userTextSizeDidChange;
-(NSString *)moodID;
-(void)setEntryIDsByMood:(NSDictionary *)arg1 ;
-(void)setSortedMoodIDs:(NSArray *)arg1 ;
-(id)_indexPathForEntryID:(id)arg1 ;
-(long long)selectedRow;
-(NSArray *)sortedMoodIDs;
-(id)_moodIDForSection:(long long)arg1 ;
-(NSDictionary *)entryIDsByMood;
-(void)setSelectedSection:(long long)arg1 ;
-(void)setSelectedRow:(long long)arg1 ;
-(void)setDisplayNamesByEntryID:(NSDictionary *)arg1 ;
-(void)setOriginalEntryID:(NSObject*<NSCopying>)arg1 ;
-(void)setMoodID:(NSString *)arg1 ;
-(void)setReplaceMoodPartForEntryIDBlock:(id)arg1 ;
-(NSObject*<NSCopying>)originalEntryID;
-(id)_entryIDForIndexPath:(id)arg1 ;
-(NSDictionary *)displayNamesByEntryID;
-(id)replaceMoodPartForEntryIDBlock;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_setSelected:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(long long)selectedSection;
@end


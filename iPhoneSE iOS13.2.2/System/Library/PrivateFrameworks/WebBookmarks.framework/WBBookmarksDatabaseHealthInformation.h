/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBBookmarksDatabaseHealthInformation : NSObject {

	unsigned long long _topLevelDuplicateBookmarksCount;
	unsigned long long _allDuplicateBookmarksCount;

}

@property (nonatomic,readonly) unsigned long long topLevelDuplicateBookmarksCount;              //@synthesize topLevelDuplicateBookmarksCount=_topLevelDuplicateBookmarksCount - In the implementation block
@property (nonatomic,readonly) unsigned long long allDuplicateBookmarksCount;                   //@synthesize allDuplicateBookmarksCount=_allDuplicateBookmarksCount - In the implementation block
-(id)initWithTopLevelDuplicateBookmarksCount:(unsigned long long)arg1 allDuplicateBookmarksCount:(unsigned long long)arg2 ;
-(unsigned long long)topLevelDuplicateBookmarksCount;
-(unsigned long long)allDuplicateBookmarksCount;
@end


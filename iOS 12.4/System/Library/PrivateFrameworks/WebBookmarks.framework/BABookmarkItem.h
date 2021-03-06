/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject {

	WebBookmarkCollection* _collection;
	WebBookmark* _bookmark;

}

@property (nonatomic,readonly) WebBookmarkCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) WebBookmark * bookmark;                            //@synthesize bookmark=_bookmark - In the implementation block
-(id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 ;
-(WebBookmarkCollection *)collection;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
-(id)description;
@end


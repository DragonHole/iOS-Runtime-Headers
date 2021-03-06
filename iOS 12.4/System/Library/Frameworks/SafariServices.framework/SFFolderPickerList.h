/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarkCollection;

@interface SFFolderPickerList : NSObject {

	unsigned long long _style;
	WebBookmarkCollection* _bookmarkCollection;

}
-(id)initWithBookmarkCollection:(id)arg1 style:(unsigned long long)arg2 ;
-(id)folderListItemsIgnoringIdentifiers:(id)arg1 ;
-(void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
-(void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
@end


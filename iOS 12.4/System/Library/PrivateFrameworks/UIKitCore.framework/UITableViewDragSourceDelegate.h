/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewDragSourceDelegate <NSObject>
@optional
-(long long)__tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
-(id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
-(id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(void)_tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)_tableView:(id)arg1 dragSessionDidEnd:(id)arg2;

@end


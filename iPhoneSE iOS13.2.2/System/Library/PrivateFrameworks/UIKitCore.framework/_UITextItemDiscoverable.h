/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextItemDiscoverable <NSObject>
@property (nonatomic,readonly) id<UICoordinateSpace> textItemCoordinateSpace; 
@optional
-(BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;

@required
-(id<UICoordinateSpace>)textItemCoordinateSpace;
-(id)visibleTextRange;
-(id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionUpdateUpNext : VUIAction {

	NSString* _state;
	NSString* _itemID;

}

@property (nonatomic,retain) NSString * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * itemID;              //@synthesize itemID=_itemID - In the implementation block
-(void)setItemID:(NSString *)arg1 ;
-(NSString *)itemID;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVAccessoryItemContentProviding.h>

@protocol SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding;
@class SVMoreFromButton, NSString;

@interface SVMoreFromAccessoryItemContentProvider : NSObject <SVAccessoryItemContentProviding> {

	SVMoreFromButton* _accessoryItemButton;
	id<SVMoreFromPublisherActionTitleProviding> _titleProvider;
	id<SVMoreFromPublisherLogoProviding> _logoProvider;
	/*^block*/id _logoCancellationBlock;

}

@property (nonatomic,readonly) SVMoreFromButton * accessoryItemButton;                                 //@synthesize accessoryItemButton=_accessoryItemButton - In the implementation block
@property (nonatomic,readonly) id<SVMoreFromPublisherActionTitleProviding> titleProvider;              //@synthesize titleProvider=_titleProvider - In the implementation block
@property (nonatomic,readonly) id<SVMoreFromPublisherLogoProviding> logoProvider;                      //@synthesize logoProvider=_logoProvider - In the implementation block
@property (nonatomic,copy) id logoCancellationBlock;                                                   //@synthesize logoCancellationBlock=_logoCancellationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVMoreFromPublisherActionTitleProviding>)titleProvider;
-(id<SVMoreFromPublisherLogoProviding>)logoProvider;
-(SVMoreFromButton *)accessoryItemButton;
-(void)updateAccessoryItemForVideo:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithMoreFromButton:(id)arg1 titleProvider:(id)arg2 logoProvider:(id)arg3 ;
-(id)logoCancellationBlock;
-(void)setLogoCancellationBlock:(id)arg1 ;
@end

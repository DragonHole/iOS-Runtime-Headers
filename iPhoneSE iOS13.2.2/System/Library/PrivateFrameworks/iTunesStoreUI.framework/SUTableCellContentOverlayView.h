/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SUCellConfiguration;

@interface SUTableCellContentOverlayView : UIView {

	SUCellConfiguration* _configuration;

}

@property (nonatomic,retain) SUCellConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)dealloc;
-(void)setConfiguration:(SUCellConfiguration *)arg1 ;
-(SUCellConfiguration *)configuration;
-(void)drawRect:(CGRect)arg1 ;
@end


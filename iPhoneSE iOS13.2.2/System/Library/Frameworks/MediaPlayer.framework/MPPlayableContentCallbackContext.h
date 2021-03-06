/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject {

	BOOL _serviced;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) BOOL serviced;                          //@synthesize serviced=_serviced - In the implementation block
-(NSIndexPath *)indexPath;
-(void)setServiced:(BOOL)arg1 ;
-(BOOL)serviced;
-(id)initWithIndexPath:(id)arg1 ;
@end


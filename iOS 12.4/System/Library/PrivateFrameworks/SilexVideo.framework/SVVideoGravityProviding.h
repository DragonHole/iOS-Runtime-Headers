/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SVVideoGravityProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * videoGravity; 
@property (nonatomic,copy,readonly) NSString * portraitVideoGravity; 
@property (nonatomic,copy,readonly) NSString * landscapeVideoGravity; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(NSString *)videoGravity;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;
-(NSString *)portraitVideoGravity;
-(NSString *)landscapeVideoGravity;

@end


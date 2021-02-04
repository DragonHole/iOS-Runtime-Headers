/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVInteractionContextFactory.h>

@protocol SVInteractionContextFactory <NSObject>
@required
-(id)createInteractionContextWithView:(id)arg1 frame:(CGRect)arg2;

@end


@class NSString;

@interface SVInteractionContextFactory : NSObject <SVInteractionContextFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInteractionContextWithView:(id)arg1 frame:(CGRect)arg2 ;
@end

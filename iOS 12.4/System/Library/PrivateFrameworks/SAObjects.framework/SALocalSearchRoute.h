/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSData, NSString;

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSData * routeAsZilchBinary; 
@property (nonatomic,copy) NSData * routeId; 
@property (nonatomic,copy) NSData * sessionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)route;
+(id)routeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setRouteId:(NSData *)arg1 ;
-(NSData *)routeId;
-(id)encodedClassName;
-(NSData *)routeAsZilchBinary;
-(void)setRouteAsZilchBinary:(NSData *)arg1 ;
-(id)groupIdentifier;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
@end


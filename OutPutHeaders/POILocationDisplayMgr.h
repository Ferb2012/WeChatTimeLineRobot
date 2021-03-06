/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString;

@interface POILocationDisplayMgr : MMService <PBMessageObserverDelegate, MMService> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)handleGetPOICityResponse:(id)response;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)logGoogleAddressResult:(id)result ForLocation:(id)location;
-(int)getPOIDisplayNameWithLocation:(id)location Scene:(int)scene SrcDisplayName:(id)name extraInfo:(id)info;
-(void)dealloc;
@end


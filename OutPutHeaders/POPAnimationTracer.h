/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class POPAnimation, NSMutableArray, NSArray;

@interface POPAnimationTracer : XXUnknownSuperclass {
	POPAnimation* _animation;
	POPAnimationState* _animationState;
	NSMutableArray* _events;
	BOOL _animationHasVelocity;
	BOOL _shouldLogAndResetOnCompletion;
}
@property(assign, nonatomic) BOOL shouldLogAndResetOnCompletion;
@property(readonly, assign, nonatomic) NSArray* writeEvents;
@property(readonly, assign, nonatomic) NSArray* allEvents;
-(void).cxx_destruct;
-(id)eventsWithType:(unsigned)type;
-(void)reset;
-(void)stop;
-(void)start;
-(void)autoreversed;
-(void)didReachToValue:(id)value;
-(void)didStop:(BOOL)stop;
-(void)didStart;
-(void)updateTension:(float)tension;
-(void)updateMass:(float)mass;
-(void)updateFriction:(float)friction;
-(void)updateBounciness:(float)bounciness;
-(void)updateSpeed:(float)speed;
-(void)updateVelocity:(id)velocity;
-(void)updateFromValue:(id)value;
-(void)updateToValue:(id)value;
-(void)writePropertyValue:(id)value;
-(void)readPropertyValue:(id)value;
-(id)initWithAnimation:(id)animation;
@end
